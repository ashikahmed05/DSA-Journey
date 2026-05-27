// ═══════════════════════════════════════════════════════
// Problem: 3405. Count the Number of Special Characters II
// Difficulty: Medium
// Topics: Hash Table, String
// Runtime: 97 ms (Beats 23.0%)
// Memory: 25.4 MB (Beats 29.2%)
// Submitted: May 27, 2026
// Link: https://leetcode.com/problems/count-the-number-of-special-characters-ii/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, int>ump;
        int res = 0;
        for(int i = 0; i < word.length(); i++){
            char c = word[i];
            auto it = ump.find(c);
            if(it == ump.end() || c > 90){
                ump[c] = i;
            }
        }
        for(auto c : ump){
            char key = c.first;
            int i = c.second;
            auto it = ump.find(key-32);
            if(it != ump.end() && i < it->second){
                res++;
            }
        }
        return res;
        
    }
};
