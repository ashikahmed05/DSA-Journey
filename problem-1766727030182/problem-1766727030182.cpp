// Last updated: 12/26/2025, 11:00:30 AM
1class Solution {
2public:
3    void backtrack(vector<int>& nums, int idx, vector<vector<int>>& ans){
4        if(idx == nums.size()){
5            ans.push_back(nums);
6            return;
7        }
8        for(int i = idx; i < nums.size(); i++){
9            swap(nums[idx], nums[i]);
10            backtrack(nums, idx+1, ans);
11            swap(nums[idx], nums[i]);
12        }
13    }
14    vector<vector<int>> permute(vector<int>& nums) {
15        vector<vector<int>> ans;
16        backtrack(nums, 0, ans);
17        return ans;        
18    }
19};