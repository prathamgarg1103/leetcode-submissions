// Last updated: 6/5/2026, 12:15:49 PM
class Solution {
public:
    int findLucky(vector<int>& arr) {
        int result = -1;
      for(int i=0;i<arr.size();i++){
        int count=0;
        for(int j=0;j<arr.size();j++){
            if(arr[j]==arr[i]){
                count++;
            }
        } if(count == arr[i]) {
                result = max(result, arr[i]); 
            }
      }return result;
    }
};