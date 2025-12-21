// Last updated: 12/21/2025, 2:51:02 PM
1class Solution {
2public:
3    int leastInterval(vector<char>& tasks, int n) {
4        vector<int> fq(26,0);
5        for(char c : tasks){
6            fq[c - 'A']++;
7        }
8        priority_queue<int>pq;
9        for(int i : fq){
10            if(i != 0) pq.push(i);
11        }
12        queue<pair<int,int>>que;
13        int time = 0;
14        while(!pq.empty() || !que.empty()){
15            time++;
16            if(!pq.empty()){
17                if(pq.top() - 1 != 0){
18                    que.push({pq.top() - 1, time + n});               
19                }
20                pq.pop();
21            } 
22            if(!que.empty() && que.front().second <= time){
23                pq.push(que.front().first);
24                que.pop();              
25            }
26        }
27        return time;
28    }
29};