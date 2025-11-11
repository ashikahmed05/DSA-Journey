// Last updated: 11/11/2025, 3:18:23 PM
class TimeMap {
public:
    unordered_map<string, map<int, string>> db;
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        
        db[key][timestamp] = value;
        
    }
    
    string get(string key, int timestamp) {
        if (db[key].empty()) return "";

        auto res = db[key].lower_bound(timestamp);

        if (res != db[key].end()){
            if (res -> first == timestamp){
                return db[key][timestamp];
            }
            if(res == db[key].begin()) return "";
        }
        if (db[key].begin() == res && res -> first != timestamp) return "";
        if ( res -> first != timestamp){
            res--;
        }
        return res -> second;
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */