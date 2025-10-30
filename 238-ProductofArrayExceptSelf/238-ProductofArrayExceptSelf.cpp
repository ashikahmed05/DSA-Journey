// Last updated: 10/30/2025, 7:22:40 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // Here i used to multiply the pre and post multiplication eliments to conclude the answer and time complexity O(n)
        
        int n = nums.size();
        vector<int> answer(n);
        vector<int> prefix(n, 1);
        vector<int> postfix(n, 1);

        for (int i = 0; i < n; i++){
            if (i != 0){
                prefix[i] = nums[i]*prefix[i-1];
                postfix[n - i - 1] = nums[n - i - 1]*postfix[n - i];
            } else {
                prefix[i] = nums[i];
                postfix[n - 1] = nums[n - 1];
            }

        }

        for (int i = 0; i < n; i++){
            int value;
            if (i != 0 && i != n -1){
                answer[i] = prefix[i-1]*postfix[i + 1];

            } else if (i == 0){
                answer [i] = postfix[i+1];
            } else if (i == n - 1){
                answer[i] = prefix[i-1];

            }
             
            

           
        }
        return answer;
        
        
    }
};