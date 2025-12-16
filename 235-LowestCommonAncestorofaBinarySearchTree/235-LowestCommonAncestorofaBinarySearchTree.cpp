// Last updated: 12/16/2025, 11:54:32 AM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10// Doing iteration on BST with TC O(h) & SC O(1);
11class Solution {
12public:
13    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
14        TreeNode* curr = root;
15        int a = max(p->val,q->val);
16        int b = min(p->val,q->val);
17
18        while(curr){
19            if (curr->val > a && curr->val > b){
20                curr = curr->left;
21            } else if (curr->val < a && curr->val < b){
22                curr = curr->right;
23            } else return curr;
24
25        }
26        return NULL;
27        
28    }
29};