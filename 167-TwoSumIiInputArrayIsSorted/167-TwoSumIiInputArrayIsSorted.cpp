// Last updated: 8/13/2026, 11:17:35 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        while(left<right){
        int sum=numbers[left]+numbers[right];
            if(sum==target) return {left+1,right+1};
            else if(sum>target) right--;
            else left++;
        }return {};
    }
};