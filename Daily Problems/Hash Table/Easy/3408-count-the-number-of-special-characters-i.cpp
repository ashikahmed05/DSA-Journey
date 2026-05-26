// ═══════════════════════════════════════════════════════
// Problem: 3408. Count the Number of Special Characters I
// Difficulty: Easy
// Topics: Hash Table, String
// Runtime: 5 ms (Beats 5.6%)
// Memory: 9.6 MB (Beats 19.5%)
// Submitted: May 26, 2026
// Link: https://leetcode.com/problems/count-the-number-of-special-characters-i/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int numberOfSpecialChars(string word) {
        int res = 0;
        unordered_set<char> ust;
        for(char c : word){
            ust.insert(c);
        }
        for(auto c : ust){
            if(ust.count(c+32)){
                res++;
            }
        }
        return res;
    }
};
