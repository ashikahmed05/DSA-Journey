// Last updated: 12/22/2025, 2:07:03 PM
1class Twitter {
2public:
3// Here used to scan top 10 latest tweets using heap.
4    unordered_map<int, vector<pair<int, int>>> tweets;
5    unordered_map<int, unordered_set<int>> users;
6    int time = 0;
7    Twitter() {
8        
9    }
10    
11    void postTweet(int userId, int tweetId) {
12        time++;
13        tweets[userId].push_back({time, tweetId});
14        
15    }
16    
17    vector<int> getNewsFeed(int userId) {
18        
19        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
20        int sz = tweets[userId].size();
21
22        if (sz > 0){
23            for(int j = sz - 1; j >= max(0, sz-10); j--){
24                pq.push(tweets[userId][j]);
25                if(pq.size() > 10) pq.pop();
26            }
27        }
28
29
30        for(int i : users[userId]){
31            int lz = tweets[i].size();
32
33            for(int j = max(0, lz - 1); j >= max(0, lz - 10) && lz != 0; j--){
34
35                pq.push(tweets[i][j]);
36                if(pq.size() > 10) pq.pop();
37            }           
38        } 
39        int size = pq.size();
40        vector<int>res(size);
41
42        while(!pq.empty()){
43            size--;
44            res[size] = pq.top().second;
45            pq.pop();
46
47        }
48        return res;
49        
50    }
51    
52    void follow(int followerId, int followeeId) {
53        if(followerId != followeeId) users[followerId].insert(followeeId);
54        
55    }
56    
57    void unfollow(int followerId, int followeeId) {
58        users[followerId].erase(followeeId);
59        
60    }
61};
62
63/**
64 * Your Twitter object will be instantiated and called as such:
65 * Twitter* obj = new Twitter();
66 * obj->postTweet(userId,tweetId);
67 * vector<int> param_2 = obj->getNewsFeed(userId);
68 * obj->follow(followerId,followeeId);
69 * obj->unfollow(followerId,followeeId);
70 */