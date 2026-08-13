// Last updated: 8/13/2026, 11:15:30 AM
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return max(nums[n-1]*nums[n-2]*nums[n-3],nums[n-1]*nums[0]*nums[1]);
    }
};