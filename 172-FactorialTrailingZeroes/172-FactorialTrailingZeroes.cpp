// Last updated: 8/13/2026, 11:17:28 AM
class Solution {
public:
    int trailingZeroes(int n) {
        // int cnt=0;
        // for(int i=5;i<=n;i*=5){
        //     cnt+=n/i;
        // }return cnt;

        int cnt=0;
        for (int i=1;i<=n;i++){
            if(i%5==0){
                cnt++;
                int x=i/5;
                while(!(x%5)){
                    cnt++;
                    x/=5;
                }
            }
        }return cnt;
    }
};