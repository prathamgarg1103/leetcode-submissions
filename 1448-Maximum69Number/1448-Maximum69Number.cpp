// Last updated: 6/5/2026, 12:15:50 PM
class Solution {
public:
    int maximum69Number(int num) {
        string s = to_string(num);   // convert number to string
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '6') {      // find first 6
                s[i] = '9';         // change it
                break;              // only one change allowed
            }
        }
        return stoi(s);             // convert back to int
    }
};
