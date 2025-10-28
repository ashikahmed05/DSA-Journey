// Last updated: 10/28/2025, 5:37:20 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // This is my first LeetCode Problem solution, with time complexity O(n) and Space Complexity O(n).
        // Here i used unordered_map for fast look up its key and value pair i have already visited through manual iteration .

        unordered_map<int, int> ump;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++){
            int x = target-nums[i];

            if (ump.find(x) != ump.end()){

                result.push_back(i);
                result.push_back(ump[x]);
                return result;
                

            } else {

                ump[nums[i]] = i;
                           
            }
        }
        return {};
        
        
    }
};