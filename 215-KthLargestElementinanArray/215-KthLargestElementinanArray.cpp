// Last updated: 12/21/2025, 1:09:57 PM
1class Solution {
2    // Here i am using min heap with TC O(nlogk) & SC O(k);
3public:
4    int findKthLargest(vector<int>& nums, int k) {
5        priority_queue<int, vector<int>, greater<int>> pq;
6
7        for(int i : nums){
8            pq.push(i);
9            if(pq.size() > k) pq.pop();
10        }
11        return pq.top();
12        
13    }
14};