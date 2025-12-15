// Last updated: 12/15/2025, 12:08:58 PM
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
13    // Here i used serialization with TC O(n+m) and SC O(h+k);
14public:
15    void stringify(TreeNode* root, string& s){
16        if(!root){
17            s += '#';
18            return;
19        };
20        s += "$"+to_string(root->val) + ",";
21        stringify(root->left, s);
22        stringify(root->right, s);
23    }
24    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
25        string s1, s2;
26        stringify(subRoot, s1);
27        stringify(root, s2);
28        return s2.find(s1) != string::npos;
29        
30    }
31};