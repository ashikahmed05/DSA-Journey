// Last updated: 10/31/2025, 8:20:58 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // Here i checked the pre existed no to find the inial consecutive no and so on with time complexity O(n).
 
        unordered_set<int> set;
        int Max = 0;

        for (int i : nums){
            set.insert(i);
        }
        for (int s : set){
            int x = s;
            int y = 0;
            if (!set.count(s-1)){               
                while(set.count(x++)){
                    y++;
                }
                Max = max(Max, y);
            } 
            
        }


        
        return Max;
        
    }
};