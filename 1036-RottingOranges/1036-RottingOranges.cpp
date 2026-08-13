// Last updated: 8/13/2026, 11:14:47 AM
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int minutes = 0;

        int r = grid.size();
        int c = grid.empty() ? 0 : grid[0].size();

        while (true) {
            vector<pair<int, int>> v;

            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    if (grid[i][j] == 1) {
                        if (i > 0 && grid[i - 1][j] == 2) {
                            v.push_back({i, j});
                        }
                        else if (i < r - 1 && grid[i + 1][j] == 2) {
                            v.push_back({i, j});
                        }
                        else if (j > 0 && grid[i][j - 1] == 2) {
                            v.push_back({i, j});
                        }
                        else if (j < c - 1 && grid[i][j + 1] == 2) {
                            v.push_back({i, j});
                        }
                    }
                }
            }

            if (v.empty()) {
                break;
            }

            for (auto it : v) {
                grid[it.first][it.second] = 2;
            }

            minutes++;
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == 1) {
                    return -1;
                }
            }
        }

        return minutes;
    }
};