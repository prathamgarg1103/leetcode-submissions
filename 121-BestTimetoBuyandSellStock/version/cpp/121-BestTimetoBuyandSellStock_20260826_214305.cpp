// Last updated: 8/26/2026, 9:43:05 PM
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int left = 0;int sum = 0;int ans = INT_MAX;
5        for(int right = 0; right < nums.size(); right++){
6            sum += nums[right];
7            while(sum >= target){
8                ans = min(ans, right - left + 1);
9                sum -= nums[left];
10                left++;
11            }
12        }return ans == INT_MAX ? 0 : ans;
13    }
14};