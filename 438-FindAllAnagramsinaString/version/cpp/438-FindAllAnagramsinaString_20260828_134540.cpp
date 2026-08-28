// Last updated: 8/28/2026, 1:45:40 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> mp;
5        for (int i = 0; i < nums.size(); i++) {
6            int need = target - nums[i];
7            if (mp.find(need) != mp.end())return {mp[need], i};
8            mp[nums[i]] = i;
9        }return {};
10    }
11};