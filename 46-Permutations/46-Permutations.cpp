// Last updated: 12/26/2025, 11:04:04 AM
1class Solution {
2    // here the  Time = O(n · n!) & space O(n);
3
4public:
5    void backtrack(vector<int>& nums, int idx, vector<vector<int>>& ans){
6        if(idx == nums.size()){
7            ans.push_back(nums);
8            return;
9        }
10        for(int i = idx; i < nums.size(); i++){
11            swap(nums[idx], nums[i]);
12            backtrack(nums, idx+1, ans);
13            swap(nums[idx], nums[i]);
14        }
15    }
16    vector<vector<int>> permute(vector<int>& nums) {
17        vector<vector<int>> ans;
18        backtrack(nums, 0, ans);
19        return ans;        
20    }
21};