// Last updated: 8/28/2026, 3:20:53 PM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int i=0;
5        for(int k=0;k<nums.size();k++){
6            if(nums[k]!=0){
7                swap(nums[i],nums[k]);
8                i++;
9            }
10        }
11    }
12};