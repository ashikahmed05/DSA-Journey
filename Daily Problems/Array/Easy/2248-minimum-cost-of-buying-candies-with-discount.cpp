// ═══════════════════════════════════════════════════════
// Problem: 2248. Minimum Cost of Buying Candies With Discount
// Difficulty: Easy
// Topics: Array, Greedy, Sorting
// Runtime: 0 ms (Beats 100.0%)
// Memory: 14.3 MB (Beats 21.5%)
// Submitted: Jun 1, 2026
// Link: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int n = cost.size();
        int ans = 0;
        int buy = 0;
        for(int i = n-1; i >= 0; i--){
            if(buy < 2){
                ans+=cost[i];
                buy++;
            }else{
                buy = 0;
            }
        }  
        return ans;    
    }
};
