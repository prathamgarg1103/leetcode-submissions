class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>q;
        for(auto it:nums)q.push(it);
        int ans;
        while(k){
            int ans1=q.top();
            q.pop();
            ans=ans1;
            k--;
        }return ans;
    }
};