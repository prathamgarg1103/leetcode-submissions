// Last updated: 8/26/2026, 11:10:56 PM
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int l=0;
5        int sum=0;
6        int ans =INT_MAX;
7        int len=0;
8        for(int r=0;r<nums.size();r++){
9            sum+=nums[r];
10            while(sum>=target){
11                sum-=nums[l];
12                ans=min(ans,r-l+1);
13                l++;             
14            }
15        }return ans==INT_MAX?0:ans;
16    }
17};