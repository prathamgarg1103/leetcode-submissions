// Last updated: 8/13/2026, 11:18:45 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;

       int k = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(k < 2 || nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};