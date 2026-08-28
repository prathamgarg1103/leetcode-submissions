// Last updated: 8/28/2026, 11:58:54 AM
1class Solution {
2public:
3    int maxVowels(string s, int k) {
4        int count=0;
5        int ans=0;
6        for(int i=0;i<k;i++){
7            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')count++;
8        }
9        ans=count;
10        for(int i=k,l=0;i<s.size();l++,i++){
11            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')count++;
12            if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u')count--;
13            ans=max(ans,count);
14        }return ans;
15    }
16};