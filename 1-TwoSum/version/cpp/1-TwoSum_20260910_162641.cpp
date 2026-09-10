// Last updated: 9/10/2026, 4:26:41 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4    int n = nums.size();
5    int sum = 0;
6    for (int i =0;i<n;i++){
7        for(int j=i+1;j<n;j++){
8            sum = nums[i] + nums[j];
9            if(sum == target){
10                return {i,j};
11            }
12        }
13      }
14      return {};
15    } 
16};