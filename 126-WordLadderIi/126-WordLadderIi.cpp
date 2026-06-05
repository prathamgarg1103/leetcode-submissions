// Last updated: 6/5/2026, 12:17:18 PM
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordSet(wordList.begin(), wordList.end());
        vector<vector<string>> ans;

        if (!wordSet.count(endWord)) return ans;

        unordered_map<string, vector<string>> parents;
        unordered_set<string> level;
        level.insert(beginWord);

        bool found = false;

        // BFS
        while (!level.empty() && !found) {
            unordered_set<string> nextLevel;

            for (auto& w : level)
                wordSet.erase(w);

            for (auto& word : level) {
                string temp = word;
                for (int i = 0; i < temp.size(); i++) {
                    char original = temp[i];
                    for (char c = 'a'; c <= 'z'; c++) {
                        temp[i] = c;
                        if (wordSet.count(temp)) {
                            if (temp == endWord)
                                found = true;
                            nextLevel.insert(temp);
                            parents[temp].push_back(word);
                        }
                    }
                    temp[i] = original;
                }
            }
            level = nextLevel;
        }

        // DFS backtracking
        vector<string> path{endWord};

        function<void(string)> dfs = [&](string word) {
            if (word == beginWord) {
                vector<string> temp = path;
                reverse(temp.begin(), temp.end());
                ans.push_back(temp);
                return;
            }
            for (auto& p : parents[word]) {
                path.push_back(p);
                dfs(p);
                path.pop_back();
            }
        };

        if (found)
            dfs(endWord);

        return ans;
    }
};
