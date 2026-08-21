// ═══════════════════════════════════════════════════════
// Problem: 3. Longest Substring Without Repeating Characters
// Difficulty: Medium
// Topics: Hash Table, String, Sliding Window
// Runtime: 11 ms (Beats 59.9%)
// Memory: 18.3 MB (Beats 40.3%)
// Submitted: Aug 21, 2026
// Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> unik(128);
        int ans = 0;
        int n = s.size();

        int l = 0;
        int r = 0;

        while(r < n){
            int c1 = s[r];
            
            while(unik[c1] > 0 && l <= r){
                int c2 = s[l];
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
