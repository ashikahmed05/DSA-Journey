// Last updated: 12/19/2025, 12:12:36 PM
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
12 // Here i am using Recursion + HashMap with TC O(n), SC O(n)
13class Solution {
14public:
15    TreeNode* dfs(vector<int>& preorder, int left, int right, unordered_map<int, int>&mp, int& preIDX){
16        if (left > right) return nullptr;
17        int rootVal = preorder[preIDX++];
18
19        TreeNode* root = new TreeNode(rootVal);
20        
21        root->left = dfs(preorder, left, mp[rootVal] - 1, mp, preIDX);
22        root->right = dfs(preorder, mp[rootVal] + 1, right, mp, preIDX);
23        return root;
24    }
25    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
26        unordered_map<int, int>mp;
27        int preIDX = 0;
28        for(int i = 0 ; i < inorder.size(); i++){
29            mp[inorder[i]] = i;
30        }
31        return dfs(preorder, 0, inorder.size() - 1, mp, preIDX);
32        
33    }
34};