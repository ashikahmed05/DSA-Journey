// Last updated: 12/22/2025, 1:47:13 PM
1class Twitter {
2public:
3    unordered_map<int, vector<pair<int, int>>> tweets;
4    unordered_map<int, unordered_set<int>> users;
5    int time = 0;
6    Twitter() {
7        
8    }
9    
10    void postTweet(int userId, int tweetId) {
11        time++;
12        tweets[userId].push_back({time*(-1), tweetId});
13        
14    }
15    
16    vector<int> getNewsFeed(int userId) {
17        
18        priority_queue<pair<int, int>>pq;
19        int sz = tweets[userId].size();
20
21        if (sz > 0){
22            for(int j = sz - 1; j >= max(0, sz-10); j--){
23                pq.push(tweets[userId][j]);
24                if(pq.size() > 10) pq.pop();
25            }
26        }
27
28
29        for(int i : users[userId]){
30            int lz = tweets[i].size();
31
32            for(int j = max(0, lz - 1); j >= max(0, lz - 10) && lz != 0; j--){
33
34                pq.push(tweets[i][j]);
35                if(pq.size() > 10) pq.pop();
36            }           
37        } 
38        int size = pq.size();
39        vector<int>res(size);
40
41        while(!pq.empty()){
42            size--;
43            res[size] = pq.top().second;
44            pq.pop();
45
46        }
47        return res;
48        
49    }
50    
51    void follow(int followerId, int followeeId) {
52        if(followerId != followeeId) users[followerId].insert(followeeId);
53        
54    }
55    
56    void unfollow(int followerId, int followeeId) {
57        users[followerId].erase(followeeId);
58        
59    }
60};
61
62/**
63 * Your Twitter object will be instantiated and called as such:
64 * Twitter* obj = new Twitter();
65 * obj->postTweet(userId,tweetId);
66 * vector<int> param_2 = obj->getNewsFeed(userId);
67 * obj->follow(followerId,followeeId);
68 * obj->unfollow(followerId,followeeId);
69 */