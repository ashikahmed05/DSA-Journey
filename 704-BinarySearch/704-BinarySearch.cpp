// Last updated: 11/8/2025, 7:06:05 PM
class Solution {
public:
//I am using a built in function

    int search(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(), nums.end(), target);
        if (it != nums.end()){
            if (*it == target) return it - nums.begin();
        }
        return -1;
        
    }
};