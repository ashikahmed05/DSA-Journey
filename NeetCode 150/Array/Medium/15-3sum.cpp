// ═══════════════════════════════════════════════════════
// Problem: 15. 3Sum
// Difficulty: Medium
// Topics: Array, Two Pointers, Sorting
// Runtime: 48 ms (Beats 53.5%)
// Memory: 29.2 MB (Beats 29.7%)
// Submitted: Aug 1, 2026
// Link: https://leetcode.com/problems/3sum/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n-2; i++){
            if(i > 0 && nums[i]==nums[i-1]) continue;
            int l = i+1;
            int r = n-1;
            while(r>l){
                int sum = nums[i]+nums[l]+nums[r];
                if(sum == 0){
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l-1]){
                        l++;
                    }
                    while(r > l && nums[r] == nums[r+1]){
                        r--;
                    }

                }else if(sum > 0){
                    r--;
                }else l++;
            }
        }
        return ans;
        
    }
};
