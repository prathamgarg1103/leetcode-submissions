// Last updated: 8/27/2026, 12:10:49 AM
1class Solution {
2public:
3    int totalFruit(vector<int>& fruits) {
4        int start = 0, maxLen = 0;
5        unordered_map<int, int> basket;
6        for (int end = 0; end < fruits.size(); ++end) {
7            basket[fruits[end]]++;
8            while (basket.size() > 2) {
9                basket[fruits[start]]--;
10                if (basket[fruits[start]] == 0) {
11                    basket.erase(fruits[start]);
12                }
13                start++;
14            }
15            maxLen = max(maxLen, end - start + 1);
16        }return maxLen;
17    }
18};