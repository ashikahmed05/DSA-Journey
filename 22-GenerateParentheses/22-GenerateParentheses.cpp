// Last updated: 12/27/2025, 11:30:39 AM
1class Solution {
2public:
3    void backtrack(int n, vector<string>& res, int open, int close, string& draft){
4       
5        if(open == close && open == n) res.push_back(draft);
6
7        if(open < n){
8            draft += '(';
9            backtrack(n, res, open + 1, close, draft);
10        } 
11        if(open > close){
12            draft += ')';
13            backtrack(n, res, open, close + 1, draft);
14        }
15        draft.pop_back();
16
17    }
18    vector<string> generateParenthesis(int n) {
19        vector<string> res;
20        if(n == 0) return res;
21        string draft = "(";
22        backtrack(n, res, 1, 0, draft);
23        return res;
24        
25    }
26};