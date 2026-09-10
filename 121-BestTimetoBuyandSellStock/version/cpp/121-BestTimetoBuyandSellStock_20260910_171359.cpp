// Last updated: 9/10/2026, 5:13:59 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int buy = prices[0];
5        int maxProfit = 0;
6        for ( int sell=1;sell<prices.size();sell++){
7            int profit = prices[sell] - buy;
8            buy = min(buy,prices[sell]);
9            maxProfit = max(profit,maxProfit);
10        }
11        return maxProfit;
12    }
13};