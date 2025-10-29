// Last updated: 10/29/2025, 9:00:51 PM
class Solution {
public:

// Here i used unordered_set and map to get the maximum no occurance with time complexity O(n)
    int maxFinder (unordered_set<int>& setnum, unordered_map<int, int>& mp){
        int max = 0;
        int maxNum;
        for (int set : setnum){
            if (mp[set] >= max){
                max = mp[set];
                maxNum = set;
            } 

        }
        setnum.erase(maxNum);
        return maxNum;


    }


    vector<int> topKFrequent(vector<int>& nums, int& k) {
        unordered_map<int, int> mp;
        unordered_set<int> setnum;
        vector<int> result;

        for (int& s : nums){
            mp[s]++;
            setnum.insert(s);
        }

        while(k--){
            result.push_back(maxFinder(setnum, mp));
        }
        return result;


        
    }
};