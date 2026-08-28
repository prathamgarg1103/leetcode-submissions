// Last updated: 8/28/2026, 11:19:20 AM
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int l=0;
5        int sum=0;
6        int ans=INT_MAX;
7        for(int r=0;r<nums.size();r++){
8            sum += nums[r];
9            // len++;
10            while(sum>=target){
11                ans=min(ans,r-l+1);
12                sum-=nums[l];
13                l++;
14            }
15        }return ans==INT_MAX?0:ans;
16    }
17};