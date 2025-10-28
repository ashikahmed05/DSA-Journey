// Last updated: 10/28/2025, 7:22:14 PM
class Solution {
public:
    bool isAnagram(string s, string t) {

        // Here I am using unordered_map for fast lookups and time complexity O(n) and space complexity O(k).

        unordered_map<char, int> mp;
        string x = s.size() >= t.size() ? t : s;
        string y = s.size() >= t.size() ? s : t;

        for (int i = 0 ; i < x.size(); i++){
            mp[x[i]]++;

        }
        for (char z : y){
            if (mp[z] != 0){
                mp[z]--;
            } else {
                return false;
            }
        }
        return true;
        
    }
};