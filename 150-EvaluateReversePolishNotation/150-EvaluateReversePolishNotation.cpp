// Last updated: 11/7/2025, 4:32:42 PM
class Solution {
public:
    int Oper(string x, string y, string ops){
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
        return result;
    }
    string in, nex, op;

    int evalRPN(vector<string>& tokens) {
        unordered_set<string> ops = {"+", "-", "*", "/"};
        stack<string> stack;
        int r = 0;
        for (int r = 0; r < tokens.size(); r++){

            stack.push(tokens[r]);

            if (ops.count(tokens[r])) {                                
                op = stack.top();
                stack.pop();
                nex = stack.top();
                stack.pop();
                in = stack.top();
                stack.pop();
                stack.push(to_string(Oper(in, nex, op)));                                
            }
        }
        return stoi(stack.top());
        
    }
};