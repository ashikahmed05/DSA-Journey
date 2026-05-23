// ═══════════════════════════════════════════════════════
// Problem: 1878. Check if Array Is Sorted and Rotated
// Difficulty: Easy
// Topics: Array
// Runtime: 0 ms (Beats 100.0%)
// Memory: 11.3 MB (Beats 18.1%)
// Submitted: May 23, 2026
// Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    bool check(vector<int>& nums) {
        int flag = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] > nums[i] && flag >= 1){
                return false;
            }else if (nums[i-1] > nums[i]) flag++;
            if(flag > 0 && nums[nums.size()-1] > nums[0]) return false;
        }
        return true;
        
    }
};
