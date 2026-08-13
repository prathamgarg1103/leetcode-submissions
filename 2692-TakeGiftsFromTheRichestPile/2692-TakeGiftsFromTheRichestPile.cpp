// Last updated: 8/13/2026, 11:13:29 AM
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long>q;
        for(auto it:gifts)q.push(it);
        long long fans=0;
        while(k){
            long long f=q.top();
            q.pop();
            long long ans=0;
            ans=floor(sqrt(f));
            q.push(ans);
            k--;
        }while(!q.empty()){
            fans+=q.top();
            q.pop();
        }return fans;
    }
};