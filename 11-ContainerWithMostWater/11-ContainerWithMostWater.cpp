// Last updated: 6/5/2026, 12:18:09 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0;
        int high=height.size()-1;
        int maxwater=0;

        while(low<high){
            int h=min(height[low],height[high]);
            int width=high-low;
            maxwater=max(maxwater,h*width);

            if(height[low] < height[high]) {
            low++;
        } else {
            high--;
        }
            }
        return maxwater;
    }
};