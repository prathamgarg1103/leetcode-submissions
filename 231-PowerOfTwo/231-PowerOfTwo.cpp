// Last updated: 6/5/2026, 12:16:39 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<=30;i++){
            int ans=pow(2,i);
            if(ans==n){
                return true;
            }
        }return false;
    }
};