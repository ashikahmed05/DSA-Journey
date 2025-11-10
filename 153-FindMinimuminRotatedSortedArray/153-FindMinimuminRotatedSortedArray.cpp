// Last updated: 11/10/2025, 10:43:18 AM
class Solution {
public:

    // Here i am using binary search with O(logn) TC 

    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;


        while( r > l){
            int mid = l + (r-l)/2;

            if (nums[mid] > nums [r]){
                l = mid + 1;
            } else{
                r = mid ;
            }

        }
        return nums[l];    
        
    }
};