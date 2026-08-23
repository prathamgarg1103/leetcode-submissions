// Last updated: 8/23/2026, 12:27:54 PM
1class Solution {
2public:
3    int findCircleNum(vector<vector<int>>& isConnected) {
4        int n=isConnected.size();
5        vector<vector<int>>adj(n);
6        for (int i = 0; i < n; i++) {
7            for (int j = 0; j < n; j++) {
8                if (isConnected[i][j] == 1) {
9                    adj[i].push_back(j);
10                }
11            }
12        }
13        int c=0;
14        vector<int>vis(n,0);
15        for(int i=0;i<n;i++){
16            if(!vis[i]){
17                c++;
18                dfs(adj,i,vis);
19            }
20        }return c;
21    }
22    void dfs(vector<vector<int>>adj,int node,vector<int>&vis){
23        vis[node]=1;
24        for(auto it:adj[node]){
25            if(!vis[it]){
26                vis[it]=1;
27                dfs(adj,it,vis);
28            }
29        }
30    }
31};