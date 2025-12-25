// Last updated: 12/25/2025, 11:07:22 AM
1class Solution {
2public:
3    void dfs(map<int, int>&mp, map<int, int>::iterator it, int target, vector<vector<int>>& res, vector<int>& root, int total){
4        if(total == target){
5            res.push_back(root);
6            return;           
7        }
8        if(it == mp.end()) return;
9        if (total + it->first> target){
10            return;
11        }            
12
13        it->second--;
14        dfs(mp, next(it), target, res, root, total);
15        root.push_back(it->first);
16        if(it->second + 1 > 0)dfs(mp, it, target, res, root, total+it->first);
17        root.pop_back();
18        it->second++;
19
20    }
21    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
22        map<int, int>mp;
23        for(int i : candidates){
24            mp[i]++;
25        }
26        vector<vector<int>> res;
27        vector<int> root;
28        dfs(mp, mp.begin(), target, res, root, 0);
29        return res;
30
31        
32    }
33};