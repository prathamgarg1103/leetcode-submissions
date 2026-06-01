import os
import requests
import json
from datetime import datetime

# Environment Variables (set via GitHub Secrets)
LEETCODE_SESSION = os.getenv("LEETCODE_SESSION")
LEETCODE_CSRF_TOKEN = os.getenv("LEETCODE_CSRF_TOKEN")

if not LEETCODE_SESSION or not LEETCODE_CSRF_TOKEN:
    print("Error: LEETCODE_SESSION and LEETCODE_CSRF_TOKEN must be set as environment variables.")
    exit(1)

HEADERS = {
    "Cookie": f"LEETCODE_SESSION={LEETCODE_SESSION}; csrftoken={LEETCODE_CSRF_TOKEN}",
    "x-csrftoken": LEETCODE_CSRF_TOKEN,
    "Content-Type": "application/json",
    "Referer": "https://leetcode.com/",
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36"
}

API_URL = "https://leetcode.com/graphql/"

LANG_TO_EXTENSION = {
    "python3": ".py",
    "python": ".py",
    "cpp": ".cpp",
    "java": ".java",
    "c": ".c",
    "csharp": ".cs",
    "javascript": ".js",
    "typescript": ".ts",
    "ruby": ".rb",
    "swift": ".swift",
    "golang": ".go",
    "scala": ".scala",
    "kotlin": ".kt",
    "rust": ".rs",
    "php": ".php",
    "mysql": ".sql",
    "mssql": ".sql",
    "oraclesql": ".sql",
    "postgresql": ".sql"
}

def make_graphql_request(query, variables=None):
    payload = {"query": query, "variables": variables or {}}
    response = requests.post(API_URL, headers=HEADERS, json=payload)
    if response.status_code != 200:
        print(f"Error fetching data: HTTP {response.status_code}")
        print(response.text)
        return None
    return response.json()

def get_username():
    query = """
    query globalData {
      userStatus {
        username
      }
    }
    """
    data = make_graphql_request(query)
    if data and "data" in data and "userStatus" in data["data"] and data["data"]["userStatus"]:
        return data["data"]["userStatus"]["username"]
    return None

def get_recent_ac_submissions(username, limit=20):
    query = """
    query recentAcSubmissions($username: String!, $limit: Int!) {
      recentAcSubmissionList(username: $username, limit: $limit) {
        id
        title
        titleSlug
        timestamp
      }
    }
    """
    data = make_graphql_request(query, {"username": username, "limit": limit})
    if data and "data" in data and "recentAcSubmissionList" in data["data"]:
        return data["data"]["recentAcSubmissionList"]
    return []

def get_submission_details(submission_id):
    # Depending on LeetCode's current GraphQL schema, this query might need adjustment.
    # We will try the standard known structure.
    query = """
    query submissionDetails($submissionId: Int!) {
      submissionDetails(submissionId: $submissionId) {
        code
        lang {
          name
          verboseName
        }
      }
    }
    """
    data = make_graphql_request(query, {"submissionId": int(submission_id)})
    
    if data and "data" in data and "submissionDetails" in data["data"]:
        return data["data"]["submissionDetails"]
    
    # Fallback to older or alternative query if needed, but this usually works
    return None

def save_code(title, title_slug, lang_name, code):
    # Ensure safe folder name
    folder_name = "".join([c for c in title if c.isalnum() or c in (" ", "-", "_")]).strip()
    
    # Check if we have an extension mapping
    ext = LANG_TO_EXTENSION.get(lang_name.lower(), f".{lang_name}")
    file_name = f"solution{ext}"
    
    folder_path = os.path.join(".", "solutions", folder_name)
    os.makedirs(folder_path, exist_ok=True)
    
    file_path = os.path.join(folder_path, file_name)
    
    # Avoid overwriting if we already have this solution (unless we want to update it)
    # We will just write it and let git handle whether it changed or not
    with open(file_path, "w", encoding="utf-8") as f:
        f.write(code)
        
    print(f"Saved: {folder_name}/{file_name}")

def main():
    print("Starting LeetCode Sync...")
    username = get_username()
    if not username:
        print("Failed to get username. Check your session cookies.")
        exit(1)
        
    print(f"Authenticated as: {username}")
    
    submissions = get_recent_ac_submissions(username, limit=30)
    print(f"Found {len(submissions)} recent accepted submissions.")
    
    for sub in submissions:
        sub_id = sub["id"]
        title = sub["title"]
        title_slug = sub["titleSlug"]
        
        details = get_submission_details(sub_id)
        if not details or not details.get("code"):
            print(f"Could not fetch code for {title} (ID: {sub_id})")
            continue
            
        code = details["code"]
        lang = details["lang"]["name"]
        
        save_code(title, title_slug, lang, code)
        
    print("Sync complete!")

if __name__ == "__main__":
    main()
