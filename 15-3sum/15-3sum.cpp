// Last updated: 6/5/2026, 12:18:07 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++) {
            // skip duplicates for i
            if(i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;
            int right = nums.size() - 1;

            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if(sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});

                    // skip duplicates for left
                    while(left < right && nums[left] == nums[left + 1]) left++;

                    // skip duplicates for right
                    while(left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                }
                else if(sum < 0) {
                    left++;   // need bigger sum
                }
                else {
                    right--;  // need smaller sum
                }
            }
        }
        return ans;
    }
};