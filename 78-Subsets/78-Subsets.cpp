// Last updated: 12/24/2025, 11:00:15 AM
1class Solution {
2public:
3    void dfs(vector<int>& nums, vector<vector<int>>& ans, vector<int>& root, int k){
4        if(k >= nums.size()){
5            ans.push_back(root);
6            return;
7        }
8        dfs(nums, ans, root, k + 1);
9        root.push_back(nums[k]);
10        dfs(nums, ans, root, k + 1);
11        root.pop_back();
12    }
13    vector<vector<int>> subsets(vector<int>& nums) {
14        vector<vector<int>> ans;
15        vector<int> root;
16        
17        dfs(nums, ans, root, 0);
18
19        return ans;
20        
21    }
22};