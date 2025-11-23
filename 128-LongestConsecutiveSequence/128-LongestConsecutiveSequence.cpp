// Last updated: 11/23/2025, 7:19:30 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // Here i checked the pre existed no to find the inial consecutive no and so on with time complexity O(n).
        unordered_set<int> number(nums.begin(), nums.end());
        int maximum = 0;

        for(int s : number){
            if (number.find(s - 1) == number.end()){
                int length = 1;
                while(number.find(s + length) != number.end()){
                    length++;

                }
                maximum = max(length, maximum);

            }
        }
        return maximum;
        
    }
    
};