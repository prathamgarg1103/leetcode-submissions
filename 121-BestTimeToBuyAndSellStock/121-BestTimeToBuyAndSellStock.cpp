// Last updated: 6/5/2026, 12:17:22 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++){
            mini = min(mini, prices[i]);

            int profit = prices[i] - mini;

            maxi = max(maxi, profit);
        }return maxi;
    }
};