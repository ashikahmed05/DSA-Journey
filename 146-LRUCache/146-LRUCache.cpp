// Last updated: 12/13/2025, 10:32:15 AM
1class LRUCache {
2    // Here i am using doubly linked list (std::list) with TC O(1).
3public:
4    int maxcap; 
5    unordered_map<int,list<pair<int,int>>::iterator>map;
6    list<pair<int,int>>dll;
7
8    
9    LRUCache(int capacity) {
10        maxcap = capacity;
11    }
12    
13    int get(int key) {
14        if(map.find(key) == map.end()){
15            return -1;
16        }
17        auto it = map[key];
18        dll.splice(dll.begin(), dll, it);
19        return it->second;
20        
21    }
22    
23    void put(int key, int value) {
24        if(map.find(key) != map.end()){
25            auto it = map[key];
26            it->second = value;
27            dll.splice(dll.begin(), dll, it);
28            return;
29        }
30        if (map.size() >= maxcap){
31            if (maxcap == 0) return;
32            map.erase(dll.back().first);
33            dll.pop_back();           
34        }
35
36        dll.push_front({key, value});
37        map[key] = dll.begin();
38        
39    }
40};
41
42/**
43 * Your LRUCache object will be instantiated and called as such:
44 * LRUCache* obj = new LRUCache(capacity);
45 * int param_1 = obj->get(key);
46 * obj->put(key,value);
47 */