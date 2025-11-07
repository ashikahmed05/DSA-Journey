// Last updated: 11/7/2025, 4:37:48 PM
class Solution {
    // Here i am using stack to operate every 3 window that is recent to its operator thats why i get it with in O(n) TC.
public:
    string Oper(string x, string y, string ops){
        int a = stoi(x);
        int b = stoi(y);
        int result;
        if (ops == "+"){
            result = a+b;
        } else if (ops == "*"){
            result = a*b;
        } else if (ops == "/"){
            result = a/b;
        } else if (ops== "-"){
            result = a-b;
        }
        return to_string(result);
    }
    string in, nex, op;

    int evalRPN(vector<string>& tokens) {
        unordered_set<string> ops = {"+", "-", "*", "/"};
        stack<string> stack;
        for (int r = 0; r < tokens.size(); r++){

            stack.push(tokens[r]);

            if (ops.count(tokens[r])) {                                
                op = stack.top();
                stack.pop();
                nex = stack.top();
                stack.pop();
                in = stack.top();
                stack.pop();
                stack.push(Oper(in, nex, op));                                
            }
        }
        return stoi(stack.top());
        
    }
};