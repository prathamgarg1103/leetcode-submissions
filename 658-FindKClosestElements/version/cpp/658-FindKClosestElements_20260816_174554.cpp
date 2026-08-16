// Last updated: 8/16/2026, 5:45:54 PM
1class Solution {
2public:
3    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
4        priority_queue<pair<int,int>>q;
5        for(auto it:arr){
6            int diff=abs(it-x);
7            q.push({diff,it});
8            if (q.size() > k)q.pop();
9        }
10        
11        vector<int>f;
12        while(!q.empty()){
13            f.push_back(q.top().second);
14            q.pop();
15        }sort(f.begin(),f.end());
16        return f;
17    }
18};