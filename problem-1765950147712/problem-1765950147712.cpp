// Last updated: 12/17/2025, 11:12:27 AM
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
12 // doing BFS Transversal with O(n) TC and O(n) SC;
13class Solution {
14public:
15    vector<int> rightSideView(TreeNode* root) {
16        vector<int> res;
17        queue<TreeNode*>q;
18        TreeNode* curr = root;
19        if(curr)q.push(curr);
20
21        while(!q.empty()){
22            int size = q.size();
23            
24            for(int i = size; i > 0; i--){
25                curr = q.front();
26                if(i == size)res.push_back(curr->val);
27                q.pop();
28                if(curr->right) q.push(curr->right);
29                if(curr->left) q.push(curr->left);
30            }
31        }
32        return res;
33        
34    }
35};