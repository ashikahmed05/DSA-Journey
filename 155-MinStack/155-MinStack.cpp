// Last updated: 11/6/2025, 7:14:50 PM
class MinStack {
    // Here i am using just built in functions to get it designed at O(1) TC
public:
    stack<long> st;
    stack<long> minimum;

    MinStack() {}
    
    void push(int val) {
        st.push(val);
        if(minimum.empty() || val <= minimum.top()){
            minimum.push(val);

        }
        
    }
    
    void pop() {
        if (!st.empty()){
            
            if (st.top() == minimum.top()){
                minimum.pop();

            }
            st.pop();           

        } 

        
    }
    
    int top() {
        return st.top();

        
    }
    
    int getMin() {
        return minimum.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */