// Last updated: 10/29/2025, 4:23:47 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<long long, vector<string>> mp;
        vector<vector<string>> result;

        for (string& s : strs){
            long long hash = 0;
            long long base = 31;
            long long divider = 1e9 + 9;
            vector<int> freq(26, 0);
            for (char& c : s){
                freq[c - 'a']++;
            }
            for (int& f : freq){
                hash = (hash*base + f) % divider;
            }
            mp[hash].push_back(s);

        }

        for (auto& pair : mp){
            result.push_back(pair.second);
        }
        return result;
        
    }
};