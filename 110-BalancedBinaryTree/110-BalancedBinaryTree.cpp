// Last updated: 12/14/2025, 2:24:23 PM
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
14    bool isheightbalanced = true;
15    
16    int checker(TreeNode* root){
17        if(!root) return 0;
18        int left = checker(root->left);
19        int right = checker(root->right);
20        if(isheightbalanced) isheightbalanced = max(left, right) - min(left, right) <= 1;
21        return max(left, right) + 1;
22    }
23    bool isBalanced(TreeNode* root) {
24        checker(root);
25        return isheightbalanced;
26        
27    }
28};