// Last updated: 8/13/2026, 11:14:45 AM
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        for(auto x:stones)q.push(x);
        while(q.size()>1){
            int x=q.top();
            q.pop();
            int y=q.top();
            q.pop();
            if(x!=y)q.push(x-y);
        }if(q.empty())return 0;
        else return q.top();
    }
};