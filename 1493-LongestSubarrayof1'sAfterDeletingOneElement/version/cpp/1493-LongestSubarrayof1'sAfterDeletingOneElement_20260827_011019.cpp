// Last updated: 8/27/2026, 1:10:19 AM
1class Solution {
2public:
3    int longestSubarray(vector<int>& nums) {
4        int l=0;
5        int ans=0;
6        int count=0;
7        for(int r=0;r<nums.size();r++){
8            if(nums[r]==0)count++;
9            while(count>1){
10                if(nums[l]==0)count--;
11                l++;
12            }
13            ans=max(ans,r-l+1);
14        }
15        return ans-1;
16    }
17};