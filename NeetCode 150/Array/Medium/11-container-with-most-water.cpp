// ═══════════════════════════════════════════════════════
// Problem: 11. Container With Most Water
// Difficulty: Medium
// Topics: Array, Two Pointers, Greedy
// Runtime: 0 ms (Beats 100.0%)
// Memory: 62.9 MB (Beats 49.7%)
// Submitted: Aug 3, 2026
// Link: https://leetcode.com/problems/container-with-most-water/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int l = 0;
        int r = height.size()-1;
        while(r > l){
            int area = min(height[l],height[r])*(r-l);
            ans = max(ans, area);

            if(height[l] >= height[r]){
                r--;
            }else l++;
        }
        return ans;
        
    }
};
