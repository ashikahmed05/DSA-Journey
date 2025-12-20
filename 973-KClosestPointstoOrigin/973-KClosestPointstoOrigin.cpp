// Last updated: 12/20/2025, 12:40:50 PM
1class Solution {
2public:
3    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
4        priority_queue<pair<int, vector<int>>> pq;
5        vector<vector<int>> res;
6        for( int i = 0; i < points.size(); i++){
7            int dist = (points[i][0])*(points[i][0]) + (points[i][1])*(points[i][1]);
8            pq.push({dist, {points[i][0], points[i][1]}});
9
10            if(pq.size() > k){
11                pq.pop();
12            }
13        }
14        while(!pq.empty()){
15            res.push_back(pq.top().second);
16            pq.pop();
17        }
18        return res;
19        
20    }
21};