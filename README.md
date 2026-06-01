# LeetCode to GitHub Auto-Sync

This repository automatically fetches your accepted LeetCode submissions and pushes them here! 

It uses a Python script running on GitHub Actions to keep your solutions backed up without you having to manually copy and paste.

## Setup Instructions

To get this working for your own LeetCode account, follow these steps:

### 1. Create a Repository
Push this folder to a new, empty repository on your GitHub account.

### 2. Get Your LeetCode Cookies
Since LeetCode does not have a public API, the script needs your session cookies to access your profile.

1. Go to [LeetCode](https://leetcode.com/) and log in.
2. Open **Developer Tools** (Right Click -> Inspect, or press F12).
3. Go to the **Network** tab.
4. Refresh the page.
5. Click on the first request to `leetcode.com` (or any GraphQL request).
6. Under **Request Headers**, look for the `Cookie:` string.
7. Find and copy the values for:
   - `LEETCODE_SESSION`
   - `csrftoken` (This will be your `LEETCODE_CSRF_TOKEN`)

### 3. Add GitHub Secrets
1. Go to your GitHub repository on the web.
2. Click on **Settings** -> **Secrets and variables** -> **Actions**.
3. Click **New repository secret**.
4. Add the first secret:
   - **Name:** `LEETCODE_SESSION`
   - **Secret:** *(Paste your session cookie value)*
5. Add the second secret:
   - **Name:** `LEETCODE_CSRF_TOKEN`
   - **Secret:** *(Paste your csrftoken value)*

### 4. Enable GitHub Actions
By default, GitHub Actions might be disabled on a new repo.
1. Go to the **Actions** tab on your repository.
2. Click the button to **Enable workflows**.
3. You can click on the **Sync Leetcode** workflow on the left side, and click **Run workflow** to test it out manually!

## How it works
- The GitHub Action runs daily.
- It executes `sync.py`.
- The Python script fetches your latest accepted submissions via the LeetCode GraphQL API.
- It saves them locally into the `solutions` folder.
- An auto-commit action automatically pushes any changes back to this repo.

<!---LeetCode Topics Start-->
# LeetCode Topics
## Linked List
|  |
| ------- |
| [0142-linked-list-cycle-ii](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0142-linked-list-cycle-ii) |
| [0876-middle-of-the-linked-list](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0876-middle-of-the-linked-list) |
## Two Pointers
|  |
| ------- |
| [0142-linked-list-cycle-ii](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0142-linked-list-cycle-ii) |
| [0876-middle-of-the-linked-list](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0876-middle-of-the-linked-list) |
## Hash Table
|  |
| ------- |
| [0142-linked-list-cycle-ii](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0142-linked-list-cycle-ii) |
<!---LeetCode Topics End-->