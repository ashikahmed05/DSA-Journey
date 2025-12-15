// Last updated: 12/15/2025, 10:05:32 AM
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
13    // Here it is done using recursion and value matching with TC O(n + m) & SC O(h+k); 
14public:
15    bool checker(TreeNode* p, TreeNode* q){
16        if(!p || !q){
17            if(!p && !q){
18                return true;
19            }else return false;
20        }
21        
22        if(p->val != q->val) return false;
23        return checker(p->left, q->left) && checker(p->right, q->right);
24    }
25    bool isSameTree(TreeNode* p, TreeNode* q) {
26        return checker(p, q);
27        
28    }
29};