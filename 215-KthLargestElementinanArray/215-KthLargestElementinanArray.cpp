// Last updated: 12/21/2025, 12:20:12 PM
1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        priority_queue<int, vector<int>, greater<int>> pq;
5
6        for(int i : nums){
7            pq.push(i);
8            if(pq.size() > k) pq.pop();
9        }
10        return pq.top();
11        
12    }
13};