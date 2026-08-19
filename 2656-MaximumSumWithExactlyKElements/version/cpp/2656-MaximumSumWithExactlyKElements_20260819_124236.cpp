// Last updated: 8/19/2026, 12:42:36 PM
1class Solution {
2public:
3    int maximizeSum(vector<int>& nums, int k) {
4        priority_queue<int> pq;
5        for (int x : nums)
6            pq.push(x);
7        int ans = 0;
8        while (k--) {
9            int x = pq.top();
10            pq.pop();
11            ans += x;
12            pq.push(x + 1);
13        }return ans;
14    }
15};