// Last updated: 12/25/2025, 11:38:53 AM
1class Solution {
2public:
3    void dfs(vector<int>& c, int target, vector<vector<int>>& res, vector<int>& root, int k, int total){
4        if(total == target){
5            res.push_back(root);
6            return;
7        }
8        if(k == c.size() || total + c[k] > target)return;
9        int unique = k;
10        while (unique < c.size() && c[unique] == c[k]) unique++;
11    
12        dfs(c, target, res, root, unique, total);
13        root.push_back(c[k]);
14        dfs(c, target, res, root, k + 1, total + c[k]);
15        root.pop_back();
16
17    }
18    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
19        sort(candidates.begin(), candidates.end());
20        vector<vector<int>> res;
21        vector<int> root;
22        dfs(candidates, target, res, root, 0, 0);
23        return res;
24        
25    }
26};