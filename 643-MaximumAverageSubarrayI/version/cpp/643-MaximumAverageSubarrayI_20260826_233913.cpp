// Last updated: 8/26/2026, 11:39:13 PM
1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int left = 0;
5        int count = 0;
6        int ans = 0;
7        for (int right = 0; right < nums.size(); right++) {
8            if (nums[right] == 0) count++;
9            while (count > k) {
10                if (nums[left] == 0)count--;
11                left++;
12            }ans = max(ans, right - left + 1);
13        }return ans;
14    }
15};