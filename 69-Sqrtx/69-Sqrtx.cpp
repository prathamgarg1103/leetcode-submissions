// Last updated: 6/5/2026, 12:17:45 PM
class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)return x;

        int low=1,high=x,ans=0;
        while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (mid * mid == x) {
            return mid;
        }
        else if (mid * mid < x) {
            low = mid + 1;
            ans = mid; // store closest
        } else {
            high = mid - 1;
        }
    }
    return ans;
}
};