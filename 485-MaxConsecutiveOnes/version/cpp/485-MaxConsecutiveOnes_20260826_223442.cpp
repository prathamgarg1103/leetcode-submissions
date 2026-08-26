// Last updated: 8/26/2026, 10:34:42 PM
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int len=0;
5        int ans=0;
6        for(int i=0;i<nums.size();i++){
7            if(nums[i]==1){
8                len++;
9                ans=max(ans,len);
10            }else len=0;
11        }return ans;
12    }
13};