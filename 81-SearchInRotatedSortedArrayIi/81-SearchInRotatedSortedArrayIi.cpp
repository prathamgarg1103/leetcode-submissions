// Last updated: 6/5/2026, 12:17:39 PM
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){

            int mid=(high+low)/2;

            if(nums[mid]==target)return true;
                if(nums[mid]==nums[low]&&nums[mid]==nums[high]){
                    low++;
                    high--;
                    continue;
                }
            

            if(nums[low]<=nums[mid]){
                if(nums[low]<=target&&target<=nums[mid]){
                high=mid-1;
                }
                else{
                low=mid+1;
                }
            }
            if(nums[mid]<=nums[high]){
                if(nums[mid]<=target&&target<=nums[high]){
                low=mid+1;
                }
                else{
                high=mid-1;
                }
            }
        }return false;
    }
};