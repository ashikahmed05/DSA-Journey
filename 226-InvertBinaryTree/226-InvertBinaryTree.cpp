// Last updated: 12/13/2025, 11:18:22 AM
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
13    // Here i am using recursion with swap and its TC O(n), SC O(h).
14public:
15    TreeNode* invertTree(TreeNode* root) {
16        if(!root) return nullptr;
17        swap(root->left, root->right);
18        invertTree(root->left);
19        invertTree(root->right);
20        return root;
21    }
22};