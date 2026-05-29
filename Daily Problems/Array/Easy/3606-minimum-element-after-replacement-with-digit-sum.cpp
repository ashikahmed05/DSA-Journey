// ═══════════════════════════════════════════════════════
// Problem: 3606. Minimum Element After Replacement With Digit Sum
// Difficulty: Easy
// Topics: Array, Math
// Runtime: 0 ms (Beats 100.0%)
// Memory: 27.6 MB (Beats 96.6%)
// Submitted: May 29, 2026
// Link: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int minElement(vector<int>& nums) {
        int res = nums[0];
        auto sum = [](int n){
            int s = 0;
            while(n){
                s+=n%10;
                n/=10;
            }
            return s;
        };
        for(int i : nums){
            res = min(sum(i), res);
        }
        return res;
        
    }
};
