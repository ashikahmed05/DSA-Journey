// ═══════════════════════════════════════════════════════
// Problem: 2855. Maximum Number of Jumps to Reach the Last Index
// Difficulty: Medium
// Topics: Array, Dynamic Programming
// Runtime: 20 ms (Beats 54.0%)
// Memory: 68.4 MB (Beats 69.3%)
// Submitted: May 11, 2026
// Link: https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/
// ═══════════════════════════════════════════════════════

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> dp(n, -1);
        
        dp[0] = 0;
        
        for (int j = 1; j < n; ++j) {
            for (int i = 0; i < j; ++i) {
                if (dp[i] != -1 && abs(nums[j] - nums[i]) <= target) {
                    dp[j] = max(dp[j], dp[i] + 1);
                }
            }
        }
        
        return dp[n - 1];
    }
};
