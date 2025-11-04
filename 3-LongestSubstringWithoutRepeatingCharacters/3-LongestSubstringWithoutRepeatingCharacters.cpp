// Last updated: 11/4/2025, 8:17:17 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        // Here i used two pointers sliding window of TC O(n) & O(k) SC
        int maxx=0;
        int l = 0;
        unordered_set<int> mp;

        for(int r = 0; r < s.size(); r++){

            while(mp.find(s[r]) != mp.end()){
                mp.erase(s[l]);
                l++;
                
            }
            maxx = max(r-l+1, maxx);
            mp.insert(s[r]);
        }


        return maxx;
        
    }
};