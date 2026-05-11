// ═══════════════════════════════════════════════════════
// Problem: 2639. Separate the Digits in an Array
// Difficulty: Easy
// Topics: Array, Simulation
// Runtime: 1 ms (Beats 64.7%)
// Memory: 15.3 MB (Beats 68.9%)
// Submitted: May 11, 2026
// Link: https://leetcode.com/problems/separate-the-digits-in-an-array/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;

        for(int n : nums){
            string s = to_string(n);
            for(char c : s){
                ans.push_back(c-'0');

            }
        }
        return ans;
    }
};
