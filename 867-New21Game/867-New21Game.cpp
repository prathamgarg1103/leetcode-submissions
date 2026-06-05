// Last updated: 6/5/2026, 12:16:02 PM
class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
         if (k == 0 || n >= k + maxPts - 1) return 1.0;

        vector<double> dp(n + 1, 0.0);
        dp[0] = 1.0;
        double windowSum = 1.0, result = 0.0;

        for (int i = 1; i <= n; i++) {
            dp[i] = windowSum / maxPts;

            if (i < k) {
                windowSum += dp[i];   // still can draw
            } else {
                result += dp[i];      // game ends here
            }

            if (i - maxPts >= 0) {
                windowSum -= dp[i - maxPts]; // slide window
            }
        }
        return result;
    }
};