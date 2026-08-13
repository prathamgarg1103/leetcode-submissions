// Last updated: 8/13/2026, 11:17:09 AM
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
    int count = 0;

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == '1') {
                count++;
                dfs(i, j, grid);
            }
        }
    }return count;
}
    void dfs(int i, int j, vector<vector<char>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] == '0')return;

    grid[i][j] = '0'; // mark visited

    dfs(i - 1, j, grid); // up
    dfs(i + 1, j, grid); // down
    dfs(i, j - 1, grid); // left
    dfs(i, j + 1, grid); // right
}
};