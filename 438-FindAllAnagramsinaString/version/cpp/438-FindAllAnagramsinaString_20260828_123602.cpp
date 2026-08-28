// Last updated: 8/28/2026, 12:36:02 PM
1class Solution {
2public:
3    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
4        if (k <= 1)
5            return 0;
6
7        long long prod = 1;
8        int ans = 0;
9        int l = 0;
10
11        for (int r = 0; r < nums.size(); r++) {
12            prod *= nums[r];
13
14            while (prod >= k) {
15                prod /= nums[l];
16                l++;
17            }
18
19            ans += r - l + 1;
20        }
21
22        return ans;
23    }
24};