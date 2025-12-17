// Last updated: 12/17/2025, 11:03:32 AM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    vector<int> rightSideView(TreeNode* root) {
15        vector<int> res;
16        queue<TreeNode*>q;
17        TreeNode* curr = root;
18        if(curr)q.push(curr);
19
20        while(q.size()){
21            int size = q.size();
22            
23            for(int i = q.size(); i > 0; i--){
24                curr = q.front();
25                if(i == size)res.push_back(curr->val);
26                q.pop();
27                if(curr->right) q.push(curr->right);
28                if(curr->left) q.push(curr->left);
29            }
30        }
31        return res;
32        
33    }
34};