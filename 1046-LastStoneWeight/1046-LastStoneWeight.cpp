// Last updated: 12/20/2025, 10:44:35 AM
1class Solution {
2    // I am taking max heap with TC O(nlogn) & SC O(n);
3public:
4    int lastStoneWeight(vector<int>& stones) {
5        priority_queue<int> pq;
6
7        for(int i : stones) pq.push(i);
8
9        while(pq.size() > 1){
10            int s1 = pq.top();            
11            pq.pop();
12            int s2 = pq.top();
13            pq.pop();
14            if(s2 != s1) pq.push(s1 - s2);            
15        }
16        if (pq.empty()) return 0;
17        return pq.top();
18        
19    }
20};