// Last updated: 11/2/2025, 8:02:06 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // here i used two pointers with a fixed value from begining with TC and SC O(n2) & O(1).

        
        sort(nums.begin(), nums.end());
        
        int a;
        vector<vector<int>> answer;

        for (int i = 0; i < nums.size(); i++){
            a = nums[i];
            if (i > 0 && a == nums [i - 1]) continue;

            int l = i + 1;
            int r = nums.size() - 1;
            while (r > l){
                int sum =  a + nums[r]+ nums[l];
                 if ( sum == 0){
                    answer.push_back({a, nums[l], nums[r]});

                    
                    while (r > l && nums[l] == nums[l+1]) l++;
                    while (r > l && nums[r] == nums[r-1]) r--;
                    r--;
                    l++;
                 } else if ( sum > 0){
                    r--;
                    
                 } else {
                    l++;
                    
                 }
                                             
            }
        }


        return answer;       
    }
};