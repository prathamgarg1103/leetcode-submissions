// Last updated: 6/5/2026, 12:16:21 PM
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int x=abs(nums[i]);
            if(nums[x-1]<0){ 
                ans.push_back(x);
            }
            nums[x-1]*=-1;
        }
        return ans;
    }
};