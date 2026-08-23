// Last updated: 8/23/2026, 11:38:51 AM
1class Solution {
2public:
3    bool canVisitAllRooms(vector<vector<int>>& rooms) {
4        vector<int>vis(rooms.size(),0);
5        queue<int>q;
6        q.push(0);
7        vis[0]=1;
8        vector<int>ans;
9        while(!q.empty()){
10            int node=q.front();
11            q.pop();
12            ans.push_back(node);
13            for(auto it:rooms[node]){
14                if(vis[it]==0){
15                    vis[it]=1;
16                    q.push(it);
17                }
18            }
19        }return (ans.size()==rooms.size());
20    }
21};