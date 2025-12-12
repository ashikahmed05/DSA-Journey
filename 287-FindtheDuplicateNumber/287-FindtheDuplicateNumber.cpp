// Last updated: 12/12/2025, 1:18:31 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        unordered_map<int,int>db;
5        for(int i = 0; i < nums.size(); i++ ){
6            auto it = db.insert({nums[i], i});
7            if (it.second == false) return nums[i];
8        }
9        return 0;
10        
11    }
12};