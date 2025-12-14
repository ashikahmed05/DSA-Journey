// Last updated: 12/14/2025, 1:25:50 PM
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
14    int maximum = 0;
15    int maxdepth(TreeNode* root){
16        if(!root) return 0;
17        int left = maxdepth(root->left);
18        int right = maxdepth(root->right);
19        maximum = max(maximum, left + right);
20        return max(left, right)+1;
21
22    }
23    int diameterOfBinaryTree(TreeNode* root) {
24        maxdepth(root);
25        
26        return maximum;     
27    }
28};