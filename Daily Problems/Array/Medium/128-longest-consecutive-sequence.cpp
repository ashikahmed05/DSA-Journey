// ═══════════════════════════════════════════════════════
// Problem: 128. Longest Consecutive Sequence
// Difficulty: Medium
// Topics: Array, Hash Table, Union-Find
// Runtime: 102 ms (Beats 15.5%)
// Memory: 92.8 MB (Beats 6.7%)
// Submitted: Jun 4, 2026
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> ump;
        unordered_set<int> ust;
        int res = 0;
        for(int i : nums){
            ust.insert(i);
        }

        for(int i : ust){
            bool exists = ust.count(i-1);
            if(!exists){
                ump[i] = 0;
            }

        }

        for(auto& m : ump){
            int i = m.first;
            bool exist = true;
            while(exist){
                exist = ust.count(i+1);
                m.second++;
                i++;
            }
            res = max(res, m.second);
        }
        return res;
        
    }
};
