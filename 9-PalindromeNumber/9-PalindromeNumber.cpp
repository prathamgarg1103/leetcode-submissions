// Last updated: 6/5/2026, 12:18:12 PM
class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0)return false;
        if(x==reverseNumber(x))return true;
        else return false;
    }
    int reverseNumber(int n) {
    long long rev = 0;

    while (n != 0) {
        // int digit = n % 10;
        // rev = rev * 10 + digit;
        // n = n / 10;
         int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
    }

    return rev;
}
};