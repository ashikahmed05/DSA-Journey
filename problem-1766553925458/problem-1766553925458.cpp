// Last updated: 12/24/2025, 10:55:25 AM
1class Solution {
2public:
3    void dfs(vector<int>& nums, vector<vector<int>>& ans, vector<int> root, int k){
4        if(k >= nums.size()){
5            ans.push_back(root);
6            return;
7        } 
8        int left = nums[k];
9        dfs(nums, ans, root, k + 1);
10        root.push_back(left);
11        dfs(nums, ans, root, k + 1);
12    }
13    vector<vector<int>> subsets(vector<int>& nums) {
14        vector<vector<int>> ans;
15        
16        dfs(nums, ans, {}, 0);
17
18        return ans;
19        
20    }
21};