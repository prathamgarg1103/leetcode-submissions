// Last updated: 6/5/2026, 12:17:49 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int sum = nums[0] ;
    int maxi = nums[0] ;
    for (int i=1 ; i<nums.size () ; i++)
    {
        sum = max (nums[i] , sum + nums[i]) ;
        maxi = max (maxi , sum) ;
    }

    return maxi ;
    }
};