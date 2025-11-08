// Last updated: 11/8/2025, 6:58:15 PM
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        // Here i used deque for iterating the position , time pair from back with time complexity O(nlogn) & SC O(n);
        int ans = 1;
        double time;
        if(speed.size() == 0) return 0;
        

        deque<pair<int, double>> pairs;
        for(int i = 0; i <speed.size(); i++){
            pairs.push_back({position[i], double(target-position[i])/speed[i]});
        }
        sort(pairs.begin(), pairs.end());
        time = pairs.back().second;
        pairs.pop_back();


        while(!pairs.empty()){
            if (pairs.back().second > time){
                time = pairs.back().second;
                ans++;
                
            }
            pairs.pop_back();
        }

        return ans;
    }
};
