// Last updated: 8/28/2026, 2:46:32 PM
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int l = 0;
5        int r = s.size() - 1;
6
7        while (l < r) {
8            while (l < r && !isalnum(s[l]))
9                l++;
10
11            while (l < r && !isalnum(s[r]))
12                r--;
13
14            if (tolower(s[l]) != tolower(s[r]))
15                return false;
16
17            l++;
18            r--;
19        }
20
21        return true;
22    }
23};