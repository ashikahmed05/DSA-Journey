// Last updated: 12/15/2025, 12:04:14 PM
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
14    void stringify(TreeNode* root, string& s){
15        if(!root){
16            s += '#';
17            return;
18        };
19        s += ','+to_string(root->val) + ',';
20        stringify(root->left, s);
21        stringify(root->right, s);
22    }
23    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
24        string s1, s2;
25        stringify(subRoot, s1);
26        stringify(root, s2);
27        return s2.find(s1) != string::npos;
28        
29    }
30};