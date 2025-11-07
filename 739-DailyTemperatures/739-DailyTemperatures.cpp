// Last updated: 11/7/2025, 7:08:43 PM
class Solution {
    // Here i am using stack for this problem with TC O(n) & SC is also O(n).
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st;
        for (int l = 0; l < n; l++){

            while (!st.empty() && temperatures[st.top()] < temperatures[l]){
                                 
                ans[st.top()] = l - st.top();
                st.pop();

            }
            st.push(l);
            

        }
        return ans;
        
    }
};