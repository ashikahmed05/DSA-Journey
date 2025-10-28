// Last updated: 10/28/2025, 6:18:55 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // Here i used the set tool for distinguish the unique element if duplicated.
        set<int> setnum;
        for (int i : nums){
            setnum.insert(i);
        }
        if (nums.size() != setnum.size()){
            return true;
        }
        return false;
        
    }
};