// Last updated: 6/5/2026, 12:16:20 PM
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        
        // Mark visited indices
        for (int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1;
            nums[index] = -abs(nums[index]);
        }
        
        // Collect missing numbers
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                result.push_back(i + 1);
            }
        }
        
        return result;
    }
};