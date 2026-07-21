class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int el;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                el=nums[i];
            }else if(nums[i]==el){
                cnt++;
            }else{
                cnt--;
            }
        }
        int count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==el)count++;
            if(count>(nums.size()/2))return el;
        }return -1;
    }
};