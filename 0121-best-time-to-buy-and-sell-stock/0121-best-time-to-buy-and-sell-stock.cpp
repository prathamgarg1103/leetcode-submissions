class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int maxprofit=0; 
        int n=prices.size();
        for(int sell=1;sell<n;sell++){
            int profit=prices[sell]-buy;
            maxprofit=max(maxprofit,profit);
            buy=min(buy,prices[sell]);
        }return maxprofit;
    }
};