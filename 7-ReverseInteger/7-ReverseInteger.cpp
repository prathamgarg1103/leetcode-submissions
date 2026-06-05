// Last updated: 6/5/2026, 12:18:13 PM
class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x){
            if(rev > INT_MAX / 10 || rev < INT_MIN / 10)
                return 0;
            int last=x%10;
            rev=(rev*10)+last;
            x/=10;
        }return rev;
    }
};