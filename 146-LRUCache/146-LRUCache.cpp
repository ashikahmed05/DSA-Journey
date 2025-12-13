// Last updated: 12/13/2025, 9:59:56 AM
1class LRUCache {
2public:
3    int maxcap; 
4    unordered_map<int,list<pair<int,int>>::iterator>map;
5    list<pair<int,int>>dll;
6
7    
8    LRUCache(int capacity) {
9        maxcap = capacity;
10    }
11    
12    int get(int key) {
13        if(map.find(key) == map.end()){
14            return -1;
15        }
16        auto it = map[key];
17        dll.splice(dll.begin(), dll, it);
18        return it->second;
19        
20    }
21    
22    void put(int key, int value) {
23        if(map.find(key) != map.end()){
24            auto it = map[key];
25            it->second = value;
26            dll.splice(dll.begin(), dll, it);
27            return;
28        }
29        if (map.size() >= maxcap){
30            if (maxcap == 0) return;
31            map.erase(dll.back().first);
32            dll.pop_back();           
33        }
34
35        dll.push_front({key, value});
36        map[key] = dll.begin();
37        
38    }
39};
40
41/**
42 * Your LRUCache object will be instantiated and called as such:
43 * LRUCache* obj = new LRUCache(capacity);
44 * int param_1 = obj->get(key);
45 * obj->put(key,value);
46 */