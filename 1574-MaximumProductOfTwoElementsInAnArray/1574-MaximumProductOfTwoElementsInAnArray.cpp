// Last updated: 8/13/2026, 11:14:11 AM
class Solution {
public:
    int maxProduct(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        return (nums[n-1] - 1) * (nums[n-2] - 1);
    }
};