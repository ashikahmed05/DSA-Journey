// Last updated: 12/15/2025, 11:12:08 AM
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
14    bool dfs(TreeNode* root, TreeNode* subRoot) {
15        if(!root || !subRoot){
16            if (!root && !subRoot){
17                 return true;
18            } else return false;
19
20        }
21        if (root->val != subRoot->val) return false;
22
23        return dfs(root->left, subRoot->left) && dfs(root->right, subRoot->right);
24        
25    }
26    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
27        if(!root) return false;
28        if(dfs(root,subRoot)) return true;     
29        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
30        
31        
32    }
33};