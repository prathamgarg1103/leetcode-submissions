// Last updated: 8/23/2026, 12:04:02 PM
1class Solution {
2public:
3    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
4        vector<vector<int>>adj(n);
5        for(auto it:edges){
6            int i=it[0];
7            int u=it[1];
8            adj[i].push_back(u);
9            adj[u].push_back(i);
10        }
11        vector<int>vis(n,0);
12        vector<int>ans;
13        dfs(adj,vis,source,ans);
14        if (find(ans.begin(), ans.end(), destination) != ans.end())return true;
15        return false;
16    }
17    void dfs(vector<vector<int>>&adj,vector<int>&vis,int node,vector<int>&ans){
18        vis[node]=1;
19        ans.push_back(node);
20        for(auto it:adj[node]){
21            if(!vis[it]){
22                vis[it]=1;
23                dfs(adj,vis,it,ans);
24            }
25        }
26    }
27};