// Last updated: 11/28/2025, 11:01:03 AM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        // Here i used two pointers method with Tc O(n) & SC O(1)
5
6        int maxx = 0;
7        int l = 0;
8        int r = height.size() - 1;
9
10        while (r > l){
11            int area = min(height[r], height[l])*(r-l);
12            maxx = max(area, maxx);
13            if (height[r] >= height[l]){
14                l++;
15
16            }else {
17                r--;
18            }     
19        }
20        return maxx;
21        
22    }
23};