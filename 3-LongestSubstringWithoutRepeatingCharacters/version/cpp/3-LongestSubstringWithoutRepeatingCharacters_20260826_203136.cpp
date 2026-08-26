// Last updated: 8/26/2026, 8:31:36 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_set<char> st;
5        int left = 0, right = 0, maxLen = 0;
6
7        while (right < s.length()) {
8            if (st.find(s[right]) == st.end()) {
9                st.insert(s[right]);
10                maxLen = max(maxLen, right - left + 1);
11                right++;
12            } else {
13                st.erase(s[left]);
14                left++;
15            }
16        }return maxLen;
17    }
18};
19