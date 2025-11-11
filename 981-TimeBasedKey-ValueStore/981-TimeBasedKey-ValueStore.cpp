// Last updated: 11/11/2025, 3:28:33 PM
class TimeMap {
public:
// here i am using map sort with TC O(logn)
    unordered_map<string, map<int, string>> db;
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        
        db[key][timestamp] = value;
        
    }
    
    string get(string key, int timestamp) {

        auto res = db[key].upper_bound(timestamp);
        if (res == db[key].begin()) return "";
        res--;

        return res -> second;
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */