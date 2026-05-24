// ═══════════════════════════════════════════════════════
// Problem: 1466. Jump Game V
// Difficulty: Hard
// Topics: Array, Dynamic Programming, Sorting
// Runtime: 15 ms (Beats 45.6%)
// Memory: 19 MB (Beats 76.5%)
// Submitted: May 24, 2026
// Link: https://leetcode.com/problems/jump-game-v/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<int> dp;

    int dfs(int i, vector<int>& arr, int d) {
        if (dp[i] != -1)
            return dp[i];

        int n = arr.size();

        int ans = 1;
        for (int j = i + 1; j <= min(n - 1, i + d); j++) {

            if (arr[j] >= arr[i])
                break;

            ans = max(ans, 1 + dfs(j, arr, d));
        }

        for (int j = i - 1; j >= max(0, i - d); j--) {

            if (arr[j] >= arr[i])
                break;

            ans = max(ans, 1 + dfs(j, arr, d));
        }

        return dp[i] = ans;
    }

    int maxJumps(vector<int>& arr, int d) {
        int n = arr.size();

        dp.resize(n, -1);

        int res = 1;

        for (int i = 0; i < n; i++) {
            res = max(res, dfs(i, arr, d));
        }

        return res;
    }
};
