// Last updated: 8/23/2026, 12:04:53 PM
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
14        return vis[destination] == 1;
15    }
16    void dfs(vector<vector<int>>&adj,vector<int>&vis,int node,vector<int>&ans){
17        vis[node]=1;
18        ans.push_back(node);
19        for(auto it:adj[node]){
20            if(!vis[it]){
21                vis[it]=1;
22                dfs(adj,vis,it,ans);
23            }
24        }
25    }
26};