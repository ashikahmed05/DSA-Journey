// Last updated: 11/10/2025, 11:45:19 AM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (r >= l){
            int mid = l + (r - l)/2;
            if (nums[mid] == target) return mid;

            if (nums[mid] >= nums[l]){
                if (target >= nums[l] && target < nums[mid]){
                    if(target == nums[l]) return l;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            } else {
                if (target < nums[l]){
                    if (target < nums[mid]){
                        r = mid - 1;
                    }else {
                        l = mid + 1;
                    }
                    
                } else {
                    r = mid - 1;
                }
            }
        }
        return -1;
        
    }
};