// Last updated: 11/1/2025, 3:59:13 PM
class Solution {
public:
    bool isPalindrome(string s) {
        string newstr = "";
        
        for (char &c : s){
            if (isalnum(c)){
                newstr += tolower(c);
            }
            
        }
        string latest = newstr;
        reverse(newstr.begin(), newstr.end());
        if (newstr == latest){
            return true;
        }
        return false;

        
    }
};