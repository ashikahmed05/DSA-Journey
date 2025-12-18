// Last updated: 12/18/2025, 10:22:45 AM
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
12 // here doing dfs with TC O(n) & SC (h);
13class Solution {
14public:
15    bool dfs(TreeNode* root, long minval, long maxval){
16        if(!root) return true;
17        if(root->val >= maxval || root->val <= minval) return false;
18        return dfs(root->left, minval, root->val) && dfs(root->right, root->val, maxval);
19    }
20    bool isValidBST(TreeNode* root) {
21        return dfs(root, LONG_MIN, LONG_MAX);       
22    }
23};