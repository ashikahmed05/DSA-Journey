// Last updated: 12/20/2025, 12:49:38 PM
1class Solution {
2    // Here i took max heap with TC O(klogn) and SC O(k);
3public:
4    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
5        priority_queue<pair<int, int>> pq;
6        vector<vector<int>> res;
7        for( int i = 0; i < points.size(); i++){
8            int dist = (points[i][0])*(points[i][0]) + (points[i][1])*(points[i][1]);
9            pq.push({dist, i});
10
11            if(pq.size() > k){
12                pq.pop();
13            }
14        }
15        while(!pq.empty()){
16            res.push_back(points[pq.top().second]);
17            pq.pop();
18        }
19        return res;
20        
21    }
22};