// Last updated: 10/28/2025, 6:35:22 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // Here i used the set tool for distinguish the unique element if duplicated. Time & Space Complexity O(n)

        unordered_set<int> setnum;

        setnum.insert(nums.begin(), nums.end());

        if (nums.size() != setnum.size()){
            return true;
        }
        return false;
        
    }
};