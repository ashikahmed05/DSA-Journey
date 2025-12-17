// Last updated: 12/17/2025, 11:44:54 AM
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
12 // here i am using dfs with TC O(n) & SC O(h);
13class Solution {
14public:
15    void dfs(TreeNode* root, int& good, int maxval){
16        if(!root) return;
17        if (root->val >= maxval){
18            good++;
19            maxval = root->val;
20            
21        }
22        dfs(root->left, good, maxval);
23        dfs(root->right, good, maxval);
24        return;
25
26
27    }
28    int goodNodes(TreeNode* root) {
29        int good = 0;
30        dfs(root, good, root->val);
31        return good;
32        
33    }
34};