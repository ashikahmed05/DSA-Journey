// ═══════════════════════════════════════════════════════
// Problem: 2043. Cyclically Rotating a Grid
// Difficulty: Medium
// Topics: Array, Matrix, Simulation
// Runtime: 12 ms (Beats 73.0%)
// Memory: 17.9 MB (Beats 34.3%)
// Submitted: May 10, 2026
// Link: https://leetcode.com/problems/cyclically-rotating-a-grid/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int numLayers = min(m, n) / 2;

        for (int layer = 0; layer < numLayers; ++layer) {
            vector<int> elements;
            
            for (int j = layer; j < n - layer - 1; ++j) elements.push_back(grid[layer][j]);
            for (int i = layer; i < m - layer - 1; ++i) elements.push_back(grid[i][n - layer - 1]);
            for (int j = n - layer - 1; j > layer; --j) elements.push_back(grid[m - layer - 1][j]);
            for (int i = m - layer - 1; i > layer; --i) elements.push_back(grid[i][layer]);

            int totalElements = elements.size();
            int shift = k % totalElements;
            
            if (shift == 0) continue;

            int idx = shift;
            for (int j = layer; j < n - layer - 1; ++j) grid[layer][j] = elements[idx++ % totalElements];
            for (int i = layer; i < m - layer - 1; ++i) grid[i][n - layer - 1] = elements[idx++ % totalElements];
            for (int j = n - layer - 1; j > layer; --j) grid[m - layer - 1][j] = elements[idx++ % totalElements];
            for (int i = m - layer - 1; i > layer; --i) grid[i][layer] = elements[idx++ % totalElements];
        }

        return grid;
    }
};
