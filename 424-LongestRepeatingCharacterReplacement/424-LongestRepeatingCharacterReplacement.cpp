// Last updated: 11/5/2025, 9:38:50 AM
class Solution {
public:
    int characterReplacement(string s, int k) {
        // Here i used optimal solution of this prob with unordered_map and two pointers with TC O(n).
        int maxx = 0;
        unordered_map<char, int> mp;
        int window = 0;
        int l = 0;
        int maxval = 0;
        for (int r = 0; r < s.size(); r++){
            mp[s[r]]++;
            window = r - l + 1;

            maxval = max(mp[s[r]], maxval);
          
            while (window - maxval > k){
                mp[s[l]]--;
                l++;
                window--;
            }
            

            maxx = max(window, maxx);

        }
        return maxx;
        
    }
};