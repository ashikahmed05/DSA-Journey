// Last updated: 12/26/2025, 11:31:26 AM
1class Solution {
2public:
3    void backtrack(vector<int>& nums, vector<vector<int>>& res, vector<int>& root, int k){
4        if(k == nums.size()){
5            res.push_back(root);
6            return;
7        }
8        int idx = k;
9        while(idx != nums.size() && nums[k] == nums[idx])idx++;
10        backtrack(nums, res, root, idx);
11        root.push_back(nums[k]);
12        backtrack(nums, res, root, k+1);
13        root.pop_back();
14
15    }
16    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
17        sort(nums.begin(), nums.end());
18        vector<vector<int>> res;
19        vector<int> root;
20        backtrack(nums, res, root, 0);
21        return res;
22    }
23};