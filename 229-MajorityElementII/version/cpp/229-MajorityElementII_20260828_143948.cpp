// Last updated: 8/28/2026, 2:39:48 PM
1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        priority_queue<pair<int,int>>q;
5        unordered_map<int,int>mp;
6        for(auto it:nums)mp[it]++;
7        for(auto it:mp)q.push({it.second,it.first});
8        vector<int> ans;
9        int n = nums.size();
10
11        while (!q.empty()) {
12            int frequency = q.top().first;
13            int value = q.top().second;
14            q.pop();
15            if (frequency > n / 3)ans.push_back(value);
16        }return ans;
17    }
18};