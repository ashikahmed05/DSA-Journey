// ═══════════════════════════════════════════════════════
// Problem: 2001. Jump Game VII
// Difficulty: Medium
// Topics: String, Dynamic Programming, Sliding Window, Prefix Sum
// Runtime: 5 ms (Beats 85.0%)
// Memory: 20.1 MB (Beats 74.4%)
// Submitted: May 25, 2026
// Link: https://leetcode.com/problems/jump-game-vii/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {   
        int n = s.length();     
        vector<bool> dp(n, false);
        dp[0] = true;
        int reachable = 0;
        for(int i = 1; i < n; i++){
            if(i-maxJump-1 >= 0 && dp[i-maxJump-1]){
                reachable--;
            }
            if(i-minJump >= 0 && dp[i-minJump]){
                reachable++;
            }
            dp[i] = (reachable > 0 && s[i] == '0');
        }
        return dp[n-1];
    }
};
