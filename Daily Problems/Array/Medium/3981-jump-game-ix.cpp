// ═══════════════════════════════════════════════════════
// Problem: 3981. Jump Game IX
// Difficulty: Medium
// Topics: Array, Dynamic Programming
// Runtime: 14 ms (Beats 51.1%)
// Memory: 219.3 MB (Beats 85.6%)
// Submitted: May 7, 2026
// Link: https://leetcode.com/problems/jump-game-ix/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();

        vector<int> suf(n);
        suf[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; --i)
            suf[i] = min(suf[i + 1], nums[i]);

        vector<int> ans(n);

        int mx = nums[0];
        int compMax = nums[0];
        int start = 0;

        for (int i = 0; i < n - 1; ++i) {
            mx = max(mx, nums[i]);
            compMax = max(compMax, nums[i]);

            if (mx <= suf[i + 1]) {
                for (int j = start; j <= i; ++j)
                    ans[j] = compMax;

                start = i + 1;
                compMax = nums[start];
            }
        }

        compMax = max(compMax, nums[n - 1]);

        for (int j = start; j < n; ++j)
            ans[j] = compMax;

        return ans;
    }
};
