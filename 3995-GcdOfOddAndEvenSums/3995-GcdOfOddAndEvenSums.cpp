// Last updated: 8/13/2026, 11:13:09 AM
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int osum=0;
        for(int i=0;i<n;i++){
            osum+=(2*i)+1;
        }
        int esum=0;
        for(int i=0;i<=n;i++){
            esum+=2*i;
        }
        return gcd(esum,osum);
    }

};