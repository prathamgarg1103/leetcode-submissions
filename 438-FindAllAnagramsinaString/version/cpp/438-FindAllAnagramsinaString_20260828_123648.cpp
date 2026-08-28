// Last updated: 8/28/2026, 12:36:48 PM
1class Solution {
2public:
3    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
4        if (k <= 1)return 0;
5        long long prod = 1;
6        int ans = 0;
7        int l = 0;
8        for (int r = 0; r < nums.size(); r++) {
9            prod *= nums[r];
10            while (prod >= k) {
11                prod /= nums[l];
12                l++;
13            }ans += r - l + 1;
14        }return ans;
15    }
16};