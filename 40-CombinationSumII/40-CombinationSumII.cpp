// Last updated: 12/25/2025, 11:42:54 AM
1class Solution {
2    // here the tc is O(n*2^n) and SC O(n) by using DFS
3public:
4    void dfs(vector<int>& c, int target, vector<vector<int>>& res, vector<int>& root, int k, int total){
5        if(total == target){
6            res.push_back(root);
7            return;
8        }
9        if(k == c.size() || total + c[k] > target)return;
10        int unique = k;
11        while (unique < c.size() && c[unique] == c[k]) unique++;
12    
13        dfs(c, target, res, root, unique, total);
14        root.push_back(c[k]);
15        dfs(c, target, res, root, k + 1, total + c[k]);
16        root.pop_back();
17
18    }
19    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
20        sort(candidates.begin(), candidates.end());
21        vector<vector<int>> res;
22        vector<int> root;
23        dfs(candidates, target, res, root, 0, 0);
24        return res;
25        
26    }
27};