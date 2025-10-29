// Last updated: 10/29/2025, 7:58:40 PM
class Solution {
public:
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