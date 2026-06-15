// ═══════════════════════════════════════════════════════
// Problem: 167. Two Sum II - Input Array Is Sorted
// Difficulty: Medium
// Topics: Array, Two Pointers, Binary Search
// Runtime: 0 ms (Beats 100.0%)
// Memory: 19.6 MB (Beats 33.2%)
// Submitted: Jun 15, 2026
// Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;
        while(r > l){
            int sum = numbers[l] + numbers[r];
            if(sum > target){
                r--;
            }else if(sum < target){
                l++;
            }else return {l+1, r+1};
        }
        return {};
        
    }
};
