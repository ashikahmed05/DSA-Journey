// Last updated: 11/5/2025, 3:26:05 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // This is my first LeetCode Problem solution, with time complexity O(n) and Space Complexity O(n).
        // Here i used unordered_map for fast look up its key and value pair i have already visited.
        


            unordered_map<int, int> mp;

            for (int i = 0; i < nums.size(); i++){
                if (mp.count(target - nums[i])){
                    return {mp[target - nums[i]], i};

                }
                mp.insert({nums[i], i});
            }
            return {};
            
        }
        
        

};