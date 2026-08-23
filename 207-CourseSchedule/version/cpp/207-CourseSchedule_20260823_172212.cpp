// Last updated: 8/23/2026, 5:22:12 PM
1class Solution {
2public:
3    bool isBipartite(vector<vector<int>>& graph) {
4    int n = graph.size();
5    vector<int> vis(n, -1);
6    queue<int> q;
7
8    for (int i = 0; i < n; i++) {
9        if (vis[i] != -1) continue;
10
11        q.push(i);
12        vis[i] = 0;
13
14        while (!q.empty()) {
15            int node = q.front();
16            q.pop();
17
18            for (int it : graph[node]) {
19                if (vis[it] == -1) {
20                    vis[it] = 1 - vis[node];
21                    q.push(it);
22                }
23                else if (vis[it] == vis[node]) {
24                    return false;
25                }
26            }
27        }
28    }return true;
29}
30};