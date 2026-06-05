// Last updated: 6/5/2026, 12:17:48 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> ans;
        int count = 0;
        int total = row * col;

        // Index initialization
        int startrow = 0, endrow = row - 1;
        int startcol = 0, endcol = col - 1;

        while (count < total) {
            // Traverse top row (left to right)
            for (int index = startcol; index <= endcol && count < total; index++) {
                ans.push_back(matrix[startrow][index]);
                count++;
            }
            startrow++;

            // Traverse right column (top to bottom)
            for (int index = startrow; index <= endrow && count < total; index++) {
                ans.push_back(matrix[index][endcol]);
                count++;
            }
            endcol--;

            // Traverse bottom row (right to left) ✅ fixed loop condition
            for (int index = endcol; index >= startcol && count < total; index--) {
                ans.push_back(matrix[endrow][index]);
                count++;
            }
            endrow--;

            // Traverse left column (bottom to top) ✅ fixed loop condition
            for (int index = endrow; index >= startrow && count < total; index--) {
                ans.push_back(matrix[index][startcol]);
                count++;
            }
            startcol++;
        }

        return ans;
    }
};
