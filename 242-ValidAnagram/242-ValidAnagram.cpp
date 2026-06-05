// Last updated: 6/5/2026, 12:16:34 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            return true;
        }else{
            return false;
        }
    }
};