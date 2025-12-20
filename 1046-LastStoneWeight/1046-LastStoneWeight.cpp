// Last updated: 12/20/2025, 10:37:27 AM
1class Solution {
2public:
3    int lastStoneWeight(vector<int>& stones) {
4        priority_queue<int> pq;
5
6        for(int i : stones) pq.push(i);
7
8        while(pq.size() > 1){
9            int s1 = pq.top();            
10            pq.pop();
11            int s2 = pq.top();
12            pq.pop();
13            if(s2 != s1) pq.push(s1 - s2);
14            
15        }
16        if (pq.empty()) return 0;
17        return pq.top();
18        
19    }
20};