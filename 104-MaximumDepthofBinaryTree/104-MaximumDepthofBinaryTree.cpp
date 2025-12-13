// Last updated: 12/13/2025, 12:11:50 PM
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
12
13 // It is done by recursion depth analysis with TC O(n), SC O(h).
14class Solution {
15public:
16    int maxDepth(TreeNode* root) {
17        if(!root) return 0;
18
19        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
20        
21    }
22};