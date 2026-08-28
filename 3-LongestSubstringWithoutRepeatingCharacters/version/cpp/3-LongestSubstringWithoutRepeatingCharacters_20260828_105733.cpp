// Last updated: 8/28/2026, 10:57:33 AM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int l=0;
5        int r=0;
6        int n=s.size();
7        unordered_set<char>mp;
8        int ans=0;
9        while(r<s.size()){
10            if(mp.find(s[r])==mp.end()){
11                mp.insert(s[r]);
12                ans=max(ans,r-l+1);
13                r++;
14            }else{
15                mp.erase(s[l]);
16                l++;
17            }
18        }return ans;
19    }
20};