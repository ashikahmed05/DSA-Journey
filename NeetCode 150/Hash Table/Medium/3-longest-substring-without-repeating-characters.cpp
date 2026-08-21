// ═══════════════════════════════════════════════════════
// Problem: 3. Longest Substring Without Repeating Characters
// Difficulty: Medium
// Topics: Hash Table, String, Sliding Window
// Runtime: 8 ms (Beats 67.4%)
// Memory: 18.5 MB (Beats 38.7%)
// Submitted: Aug 21, 2026
// Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> unik(127);
        int ans = 0;
        int n = s.size();

        int l = 0;
        int r = 0;

        while(r < n){
            int c1 = s[r] - '\0';
            
            while(unik[c1] > 0 && l <= r){
                int c2 = s[l] - '\0';
                unik[c2]--;
                l++;
            }
            unik[c1]++;
            r++;
            ans = max(ans, r-l);


        }
        return ans;


        
    }
};
