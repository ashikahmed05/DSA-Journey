// Last updated: 12/22/2025, 11:40:26 AM
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
21        for(int j = sz - 1; j >= max(0, sz-10) && sz != 0; j--){
22            pq.push(tweets[userId][j]);
23            if(pq.size() > 10) pq.pop();
24        }
25
26
27        for(int i : users[userId]){
28            int lz = tweets[i].size();
29
30            for(int j = max(0, lz - 1); j >= max(0, lz - 10) && lz != 0; j--){
31
32                pq.push(tweets[i][j]);
33                if(pq.size() > 10) pq.pop();
34            }           
35        } 
36        int size = pq.size();
37        vector<int>res(size);
38
39        while(!pq.empty()){
40            size--;
41            res[size] = pq.top().second;
42            pq.pop();
43
44        }
45        return res;
46        
47    }
48    
49    void follow(int followerId, int followeeId) {
50        users[followerId].insert(followeeId);
51        
52    }
53    
54    void unfollow(int followerId, int followeeId) {
55        users[followerId].erase(followeeId);
56        
57    }
58};
59
60/**
61 * Your Twitter object will be instantiated and called as such:
62 * Twitter* obj = new Twitter();
63 * obj->postTweet(userId,tweetId);
64 * vector<int> param_2 = obj->getNewsFeed(userId);
65 * obj->follow(followerId,followeeId);
66 * obj->unfollow(followerId,followeeId);
67 */