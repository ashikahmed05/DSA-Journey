// Last updated: 11/3/2025, 9:55:26 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // I have used two pointers here by taking adjacent pointers. TC O(n) && SC O(1).
        int maxx = 0;
        int l = 0;
        int r = l + 1;

        while ( r < prices.size()){
            if (prices[r] > prices[l] && r < prices.size()){
                maxx = max(prices[r]-prices[l], maxx);
                r++;
            } else if (prices[r] < prices[l] && r < prices.size()){
                l = r;
                r++;
            } else {
                r++;
            }
        }
        return maxx;
        
    }
};