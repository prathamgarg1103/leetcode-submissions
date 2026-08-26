// Last updated: 8/27/2026, 1:02:31 AM
1class Solution {
2public:
3    int maxVowels(string s, int k) {
4        int l=0;
5        int ans=0;
6        int count=0;
7        for(int i=0;i<k;i++){
8            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')count++;
9        }ans=count;
10        for(int i=k;i<s.size();i++){
11            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')count++;
12            if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u')count--;
13            l++;
14           ans= max(ans,count);
15        }return ans;
16    }
17};