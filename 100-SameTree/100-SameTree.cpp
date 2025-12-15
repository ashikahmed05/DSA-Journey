// Last updated: 12/15/2025, 9:57:06 AM
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
14    bool checker(TreeNode* p, TreeNode* q){
15        if(!p || !q){
16            if(!p && !q){
17                return true;
18            }else return false;
19        }
20        
21        if(p->val != q->val) return false;
22        return checker(p->left, q->left) && checker(p->right, q->right) ? true : false;
23    }
24    bool isSameTree(TreeNode* p, TreeNode* q) {
25        return checker(p, q);
26        
27    }
28};