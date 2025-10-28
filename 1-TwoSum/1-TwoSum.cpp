// Last updated: 10/28/2025, 5:46:32 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // This is my first LeetCode Problem solution, with time complexity O(n) and Space Complexity O(n).
        // Here i used unordered_map for fast look up its key and value pair i have already visited.
        

        unordered_map<int, int> ump;

        for (int i = 0; i < nums.size(); i++){
            int x = target-nums[i];

            if (ump.find(x) != ump.end()){
                return {ump[x], i};
                

            } else {

                ump[nums[i]] = i;
                           
            }
        }
        return {};
        
        
    }
};