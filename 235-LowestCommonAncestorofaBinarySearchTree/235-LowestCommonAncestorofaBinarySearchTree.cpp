// Last updated: 12/16/2025, 11:40:59 AM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
14        if (!root) return NULL;
15        if(p == root || q == root){
16            return root;
17        }
18        TreeNode* left = lowestCommonAncestor(root->left,p,q);
19        TreeNode* right = lowestCommonAncestor(root->right,p,q);
20
21        if(left && right){
22            return root;
23        }
24        return right ? right : left ;
25        
26    }
27};