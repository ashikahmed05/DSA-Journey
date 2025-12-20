// Last updated: 12/20/2025, 11:29:38 AM
1class Solution {
2public:
3    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
4        priority_queue<double> pq;
5        unordered_map<double, vector<vector<int>>>mp;
6        vector<vector<int>> res;
7        for( int i = 0; i < points.size(); i++){
8            double dist = sqrt((points[i][0])*(points[i][0]) + (points[i][1])*(points[i][1]));
9            pq.push(dist);
10            mp[dist].push_back({points[i][0], points[i][1]});
11
12            if(pq.size() > k){
13                mp[pq.top()].pop_back();
14                pq.pop();
15            }
16        }
17        for(auto it : mp){
18            for(int i = 0; i < it.second.size(); i++){
19                res.push_back(it.second[i]);
20            }
21            
22        }
23        return res;
24        
25    }
26};