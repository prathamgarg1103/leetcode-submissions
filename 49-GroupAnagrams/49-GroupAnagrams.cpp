// Last updated: 6/5/2026, 12:17:50 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }

            // convert count to string key
            string key;
            for (int i = 0; i < 26; i++) {
                key += "#" + to_string(count[i]);
            }

            mp[key].push_back(s);
        }

        vector<vector<string>> ans;
        for (auto &it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
