// Last updated: 6/5/2026, 12:15:47 PM
class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for (int num : nums) {
            // Even numbers cannot be formed
            if ((num & 1) == 0) {
                ans.push_back(-1);
                continue;
            }

            // Count trailing ones
            int cnt = 0;
            int temp = num;
            while (temp & 1) {
                cnt++;
                temp >>= 1;
            }

            // Subtract 2^(cnt-1)
            ans.push_back(num - (1 << (cnt - 1)));
        }

        return ans;
    }
};
