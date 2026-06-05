// Last updated: 6/5/2026, 12:17:05 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int max=nums[0];
        for(int i=0;i<nums.size();i++){
            if(max>nums[i]){
                max=nums[i];
            }
        }return max;
    }
};