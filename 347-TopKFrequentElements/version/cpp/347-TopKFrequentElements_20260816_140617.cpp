// Last updated: 8/16/2026, 2:06:17 PM
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int, int> freq;
5
6        for (int x : nums)
7            freq[x]++;
8
9        priority_queue<pair<int, int>> pq;
10
11        for (auto it : freq) {
12            pq.push({it.second, it.first});
13        }
14
15        vector<int> ans;
16
17        while (k--) {
18            ans.push_back(pq.top().second);
19            pq.pop();
20        }
21
22        return ans;
23    }
24};