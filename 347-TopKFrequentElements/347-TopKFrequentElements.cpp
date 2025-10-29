// Last updated: 10/29/2025, 9:31:31 PM
class Solution {
public:

// Here i used unordered_map to get the maximum no of occurance with the help of bucket sorting with time & space complexity O(n)


    vector<int> topKFrequent(vector<int>& nums, int& k) {
        unordered_map<int, int> mp;
        vector<vector<int>> bucket(nums.size() + 1);
        vector<int> result;

        for (int& s : nums){
            mp[s]++;
        }
        for (auto& pair : mp){
            
            bucket[pair.second].push_back(pair.first);
        }
        for (int i = nums.size(); i >= 0 ; i--){
            if (!bucket[i].empty()){
                for (int x : bucket[i]){
                    if (k > result.size()){
                        result.push_back(x);
                        

                    }

                    

                }
                
            }
        }


        return result;


        
    }
};