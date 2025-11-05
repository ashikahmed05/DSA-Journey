// Last updated: 11/5/2025, 9:35:47 AM
class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxx = 0;
        unordered_map<char, int> mp;
        int window = 0;
        int l = 0;
        int maxval = 0;
        for (int r = 0; r < s.size(); r++){
            mp[s[r]]++;
            window = r - l + 1;
            for (auto map : mp){
                maxval = max(map.second, maxval);
            }           
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