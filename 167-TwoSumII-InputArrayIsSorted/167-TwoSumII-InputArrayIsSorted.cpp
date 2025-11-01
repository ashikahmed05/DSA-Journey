// Last updated: 11/1/2025, 5:16:02 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Here i use two pointers method to get the correct indexs as its time complexity is O(n) and Space Complexity is O(1)
        
        int l = 0;
        int r = numbers.size() - 1;
        while (r > l){
                while(numbers[l] + numbers[r] > target){
                    r--;
                }
                while(numbers[l] + numbers[r] < target){
                    l++;
                }
                if (numbers[l] + numbers[r] == target){
                    return {l+1, r+1};
                }

        }
        
        
        return {};
        
        
    }
};