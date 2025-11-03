// Last updated: 11/3/2025, 6:43:52 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        // Here i used two pointers method with Tc O(n) & SC O(1)

        int maxx = 0;
        int l = 0;
        int r = height.size() - 1;

        while (r > l){
            int area = min(height[r], height[l])*(r-l);
            maxx = max(area, maxx);
            if (height[r] >= height[l]){
                l++;

            }else {
                r--;
            }     
        }
        return maxx;
        
    }
};