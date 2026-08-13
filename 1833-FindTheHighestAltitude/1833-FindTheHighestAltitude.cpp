// Last updated: 8/13/2026, 11:13:52 AM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0;
        int sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            maxi=max(maxi,sum);
        }return maxi;
    }
};