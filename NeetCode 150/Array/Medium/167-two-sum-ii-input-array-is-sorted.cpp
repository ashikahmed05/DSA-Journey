// ═══════════════════════════════════════════════════════
// Problem: 167. Two Sum II - Input Array Is Sorted
// Difficulty: Medium
// Topics: Array, Two Pointers, Binary Search
// Runtime: 2 ms (Beats 10.9%)
// Memory: 19.5 MB (Beats 64.5%)
// Submitted: Jul 4, 2026
// Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0;
        int r = n-1;

        while(r > l){
            int sum = numbers[l]+numbers[r];
            if(sum == target){
                return {l+1, r+1};
            }else if (sum > target){
                r--;
            }else l++;
        }
        return {};
        
    }
};
