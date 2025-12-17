// Last updated: 12/17/2025, 11:38:20 AM
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
14    void dfs(TreeNode* root, int& good, int maxval){
15        if(!root) return;
16        if (root->val >= maxval){
17            good++;
18            maxval = root->val;
19            
20        }
21        dfs(root->left, good, maxval);
22        dfs(root->right, good, maxval);
23        return;
24
25
26    }
27    int goodNodes(TreeNode* root) {
28        int good = 0;
29        dfs(root, good, root->val);
30        return good;
31        
32    }
33};