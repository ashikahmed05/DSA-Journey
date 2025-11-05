// Last updated: 11/5/2025, 12:07:52 PM
class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        // here i did sliding window with TC O(n*m) & SC O(1)
        vector<int> fs1(26, 0), fs2(26, 0);
        if (s1.size() > s2.size()) return false;
        int l = 0;
        for (char c : s1) fs1[c-'a']++;

        for (int r = 0; r < s2.size(); r++){
            fs2[s2[r] - 'a']++;

            if (r - l + 1 < s1.size()) continue;
            if (fs1 == fs2) return true;
            fs2[s2[l] - 'a']--;
            l++;
        }       
        return false;
    }
};