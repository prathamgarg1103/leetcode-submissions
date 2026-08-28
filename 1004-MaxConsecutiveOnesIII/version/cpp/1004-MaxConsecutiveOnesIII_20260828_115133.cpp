// Last updated: 8/28/2026, 11:51:33 AM
1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int l=0;
5        int r=0;
6        int ans=0;
7        int count=0;
8        for(int r=0;r<nums.size();r++){
9            if(nums[r]==0)count++;
10
11            while(count>k){
12                if(nums[l]==0)count--;
13                l++;
14            }
15            ans=max(ans,r-l+1);
16            
17        }return ans;
18    }
19};