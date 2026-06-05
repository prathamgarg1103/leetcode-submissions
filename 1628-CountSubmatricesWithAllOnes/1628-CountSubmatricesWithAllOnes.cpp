// Last updated: 6/5/2026, 12:15:43 PM
class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
  int m = mat.size(), n = mat[0].size(), ans = 0;
  for (int r0 = 0; r0 < m; ++r0) {
    vector<int> row(n, 1);
    for (int r1 = r0; r1 < m; ++r1) {
      for (int c = 0; c < n; ++c)
        row[c] &= mat[r1][c];
      ans += countContinuous(row);
    }
  }
  return ans;
}

int countContinuous(vector<int>& row) {
  int sum = 0, len = 0;
  for (int x : row) {
    len = x == 0 ? 0 : len + 1;
    sum += len;
  }
  return sum;
}

};