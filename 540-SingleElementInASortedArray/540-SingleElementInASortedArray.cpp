// Last updated: 6/5/2026, 12:16:15 PM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i==0){
                if(nums[i]!=nums[i+1])return nums[i];
            }
            else if(i==nums.size()-1){
                if(nums[i]!=nums[i-1])return nums[i];
            }
            else{
                if(nums[i]!=nums[i-1]&&nums[i]!=nums[i+1])return nums[i];
            }
        }return -1;
    }
};