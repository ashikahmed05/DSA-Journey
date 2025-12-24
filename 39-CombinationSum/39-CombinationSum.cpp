// Last updated: 12/24/2025, 2:49:26 PM
1class Solution {
2public:
3    void dfs(vector<int>& c, int& target, vector<vector<int>>& res, vector<int>&root, int k, int total){
4        
5        if(total >= target){
6            if(total == target){
7                res.push_back(root);
8            }
9            return;
10        }
11        if (k == c.size()) return;
12        dfs(c, target, res, root, k+1, total);
13        root.push_back(c[k]);               
14        dfs(c, target, res, root, k, total + c[k]);
15        root.pop_back();
16        
17    }
18    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
19        sort(candidates.begin(), candidates.end());
20        vector<vector<int>> res;
21        vector<int> root;
22        dfs(candidates, target, res, root, 0, 0);
23        return res;
24        
25    }
26};