// Last updated: 8/26/2026, 10:10:08 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int n = s.length();
5        int hash[256];
6        fill(hash, hash + 256, -1);
7        int l = 0;
8        int r = 0;
9        int maxlen = 0;
10        while (r < n) {
11            if (hash[s[r]] != -1) {
12                if (hash[s[r]] >= l) {
13                    l = hash[s[r]] + 1;
14                }
15            }
16            int len = r - l + 1;
17            maxlen = max(maxlen, len);
18            hash[s[r]] = r;
19            r++;
20        }return maxlen;
21    }
22};