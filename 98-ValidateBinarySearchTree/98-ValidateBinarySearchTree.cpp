// Last updated: 12/18/2025, 10:05:52 AM
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
14    bool dfs(TreeNode* root, long minval, long maxval){
15        if(!root) return true;
16        if(root->val >= maxval || root->val <= minval) return false;
17        return dfs(root->left, minval, root->val) && dfs(root->right, root->val, maxval);
18    }
19    bool isValidBST(TreeNode* root) {
20        return dfs(root, LONG_MIN, LONG_MAX);       
21    }
22};