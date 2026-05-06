// ═══════════════════════════════════════════════════════
// Problem: 1972. Rotating the Box
// Difficulty: Medium
// Topics: Array, Two Pointers, Matrix
// Runtime: 12 ms (Beats 57.2%)
// Memory: 56.8 MB (Beats 69.1%)
// Submitted: May 7, 2026
// Link: https://leetcode.com/problems/rotating-the-box/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();
        int n = boxGrid[0].size();
        for (int i = 0; i < m; i++) {
            int empty = n - 1;

            for (int j = n - 1; j >= 0; j--) {
                if (boxGrid[i][j] == '*') {
                    empty = j - 1;
                }
                else if (boxGrid[i][j] == '#') {
                    swap(boxGrid[i][j], boxGrid[i][empty]);
                    empty--;
                }
            }
        }
        vector<vector<char>> ans(n, vector<char>(m));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[j][m - 1 - i] = boxGrid[i][j];
            }
        }

        return ans;
    }
};
