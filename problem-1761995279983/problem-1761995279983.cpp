// Last updated: 11/1/2025, 4:37:59 PM
class Solution {
public:
    bool isPalindrome(string s) {

        // Here i used two pointer method to find the palandrome with TC & SC O(n) & O(1). Initially i used built in tools like alphanum, reverse but it take SC O(n) thats why i choose this.
        int l = 0;
        int r = s.length() - 1;
        while (r > l){
            while (r > l && !isalnumb(s[l])){
                l++;
            }
            while (r > l && !isalnumb(s[r])) {
                r--;
            }
            if (tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;
            
        }
        return true;

       
    }
    bool isalnumb (char c){
        return ('A' <= c && c <= 'Z' || 'a' <= c && c <= 'z' || '0' <= c && c <= '9');
    
    }
};