// Last updated: 6/5/2026, 12:16:18 PM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());  // sort greed factors
        sort(s.begin(), s.end());  // sort cookie sizes
        
        int child = 0, cookie = 0;
        int n = g.size(), m = s.size();
        
        while (child < n && cookie < m) {
            if (s[cookie] >= g[child]) {
                // current cookie satisfies this child
                child++;
            }
            // move to next cookie
            cookie++;
        }
        return child; // number of satisfied children
    }
};