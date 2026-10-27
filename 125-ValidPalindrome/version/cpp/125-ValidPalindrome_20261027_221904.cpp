// Last updated: 10/27/2026, 10:19:04 PM
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int low=0;
5        int high=s.size()-1;
6        while(low<high){
7            while (low < high && !isalnum(s[low])) low++;
8            // skip non-alphanumeric from right
9            while (low < high && !isalnum(s[high])) high--;
10
11            if (tolower(s[low]) != tolower(s[high])) {
12                return false;
13            }
14            low++;
15            high--;
16        }return true;
17    }
18};