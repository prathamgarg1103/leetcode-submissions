// Last updated: 8/26/2026, 10:17:33 PM
1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int n = nums.size();
5        
6        double sum = 0;
7        
8        // first window
9        for (int i = 0; i < k; i++) {
10            sum += nums[i];
11        }
12        
13        double maxSum = sum;
14        
15        // sliding window
16        for (int i = k; i < n; i++) {
17            sum += nums[i] - nums[i - k];
18            maxSum = max(maxSum, sum);
19        }
20        
21        return maxSum / k;
22    }
23};