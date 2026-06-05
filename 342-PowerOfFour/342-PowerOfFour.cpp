// Last updated: 6/5/2026, 12:16:25 PM
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false; 
        while (n % 4 == 0) {
            n /= 4; 
        }
        return n == 1; 
    }
};