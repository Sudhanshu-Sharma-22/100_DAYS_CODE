
//https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/submissions/1119593515/?envType=daily-question&envId=2023-12-14

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(),n = grid[0].size();
        vector<int> rowOnes(m, 0);
        vector<int> colOnes(n, 0);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                rowOnes[i] += grid[i][j];
                colOnes[j] += grid[i][j];
            }
        }
        for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) grid[i][j] = 2 * (rowOnes[i] + colOnes[j]) - m - n;
        return grid;
    }
};
