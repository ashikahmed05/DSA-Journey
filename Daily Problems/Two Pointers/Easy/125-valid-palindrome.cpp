// ═══════════════════════════════════════════════════════
// Problem: 125. Valid Palindrome
// Difficulty: Easy
// Topics: Two Pointers, String
// Runtime: 4 ms (Beats 14.8%)
// Memory: 10 MB (Beats 54.3%)
// Submitted: Jun 5, 2026
// Link: https://leetcode.com/problems/valid-palindrome/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length()-1;
        while(r > l){
            while(r > l && !isalnum(s[l])) l++;
            while(r > l && !isalnum(s[r])) r--;
            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;

        }

        return true;
        
    }
};
