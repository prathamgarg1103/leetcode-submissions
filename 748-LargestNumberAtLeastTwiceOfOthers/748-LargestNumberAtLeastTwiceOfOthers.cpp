// Last updated: 6/5/2026, 12:16:08 PM
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxVal = -1;
        int index = 0;

        // 1. Find maximum element and its index
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxVal) {
                maxVal = nums[i];
                index = i;
            }
        }

        // 2. Check dominant condition
        for (int i = 0; i < nums.size(); i++) {
            if (i != index && maxVal < 2 * nums[i]) {
                return -1;
            }
        }

        return index;
    }
};
