// Last updated: 11/6/2025, 5:12:33 PM
class Solution {
public:
    bool isValid(string s) {
        // Here i added stack for verfy the parenthesis sequence with TC O(n) & O(n) SC;
        unordered_map<char, char> mp = {
            {'(',')'},
            {'{','}'},
            {'[',']'}
        };

        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            if (mp[s[i]] != 0){
                st.push(mp[s[i]]);
            } else {
                if (st.empty()) return false;
                if (st.top() == s[i]){
                    st.pop();
                    continue;
                } else {
                    return false;
                }
            }
        }
        if (!st.empty()) return false;
        return true;
        
    }
};