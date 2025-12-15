// Last updated: 12/15/2025, 11:41:30 AM
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
14    string s = "empty";
15    string stringify(TreeNode* root){
16        if(!root){
17            return "#";
18        }
19        string value;
20        if(s != "true")value = stringify(root->left) + "L" + stringify(root->right) + "R" + to_string(root->val);
21        if ( s != "empty") s = s == value ? "true" : s;
22        
23        return s == "true" ? s : value;
24    }
25    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
26        s = stringify(subRoot);
27        stringify(root);
28        return s=="true";
29        
30    }
31};