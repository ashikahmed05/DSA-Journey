// Last updated: 12/21/2025, 5:20:37 PM
1class Solution {
2    // Greedy rule applied with TC O(N) and SC O(log26)
3public:
4    int leastInterval(vector<char>& tasks, int n) {
5        vector<int> fq(26,0);
6        for(char c : tasks){
7            fq[c - 'A']++;
8        }
9        priority_queue<int>pq;
10        for(int i : fq){
11            if(i != 0) pq.push(i);
12        }
13        queue<pair<int,int>>que;
14        int time = 0;
15        while(!pq.empty() || !que.empty()){
16            time++;
17            if(!pq.empty()){
18                if(pq.top() - 1 != 0){
19                    que.push({pq.top() - 1, time + n});               
20                }
21                pq.pop();
22            } 
23            if(!que.empty() && que.front().second <= time){
24                pq.push(que.front().first);
25                que.pop();              
26            }
27        }
28        return time;
29    }
30};