// Last updated: 6/5/2026, 12:15:53 PM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      for(int i=0;i<nums.size();i++){
        nums[i]*=nums[i];
      }  
      sort(nums.begin(),nums.end());
      return nums;
    }
};