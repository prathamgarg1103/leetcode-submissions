// Last updated: 6/5/2026, 12:17:19 PM
class Solution {
public:
    bool isPalindrome(string s) {
        int low=0;
        int high=s.size()-1;
        while(low<high){
            while (low < high && !isalnum(s[low])) low++;
            // skip non-alphanumeric from right
            while (low < high && !isalnum(s[high])) high--;

            if (tolower(s[low]) != tolower(s[high])) {
                return false;
            }
            low++;
            high--;
        }return true;
    }
};