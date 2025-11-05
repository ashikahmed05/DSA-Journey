// Last updated: 11/5/2025, 4:24:02 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // I have used hashing technique to create a unique no that is only similar for the anagrams so thats why i am able to identify the anagrams and its time complexity is O(nk)

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