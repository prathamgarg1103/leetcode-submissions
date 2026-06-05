// Last updated: 6/5/2026, 12:15:56 PM
class Solution {
public:
    int fib(int n) {
        if(n<=1)return n;
        int last=fib(n-1);
        int slast=fib(n-2);
        return last+slast;
    }
};