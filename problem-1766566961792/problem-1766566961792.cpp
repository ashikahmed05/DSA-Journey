// Last updated: 12/24/2025, 2:32:41 PM
1class Solution {
2public:
3    void dfs(vector<int>& c, int& target, vector<vector<int>>& res, vector<int>&root, int k, int total){
4        
5        if(k == c.size() || total >= target){
6            if(total == target){
7                res.push_back(root);
8            }
9            return;
10        }
11        
12        dfs(c, target, res, root, k+1, total);
13        root.push_back(c[k]);               
14        dfs(c, target, res, root, k, total + c[k]);
15        root.pop_back();
16        
17    }
18    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
19        vector<vector<int>> res;
20        vector<int> root;
21        dfs(candidates, target, res, root, 0, 0);
22        return res;
23        
24    }
25};