// Last updated: 6/5/2026, 12:18:01 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        auto it = unique(nums.begin(), nums.end());

        nums.erase(it, nums.end());

        return nums.size();
    }
};