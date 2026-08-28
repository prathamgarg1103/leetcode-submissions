// Last updated: 8/28/2026, 2:02:58 PM
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        vector<int>ans(nums.size(),1);
5         int prefix = 1;
6
7        for (int i = 0; i < nums.size(); i++) {
8            ans[i] = prefix;
9            prefix *= nums[i];
10        }
11
12        int suffix = 1;
13
14        for (int i = nums.size() - 1; i >= 0; i--) {
15            ans[i] *= suffix;
16            suffix *= nums[i];
17        }return ans;
18    }
19};