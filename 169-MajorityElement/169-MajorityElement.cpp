// Last updated: 6/5/2026, 12:16:59 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int el;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                el=nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el)cnt2++;
        }
        if(cnt2>(nums.size()/2)){
            return el;
        }return -1;
    }
};