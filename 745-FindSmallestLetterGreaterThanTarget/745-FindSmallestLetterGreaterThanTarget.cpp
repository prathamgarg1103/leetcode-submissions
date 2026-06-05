// Last updated: 6/5/2026, 12:16:09 PM
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low=0;
        int high=letters.size()-1;
         char ans = letters[0];
        while(high>=low){
            int mid=(low+high)/2;
            if(letters[mid]>target){
                ans=letters[mid];
                // low=mid+1;
                high=mid-1;
            }
            // else if(letters[mid]>target){
            //     high=mid-1;
            // }
            else{
                low=mid+1;
            }
        }return ans;
    }
};