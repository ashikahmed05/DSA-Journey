// Last updated: 12/18/2025, 11:31:26 AM
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
14    TreeNode* dfs(TreeNode* root, vector<int>& res){
15        if(!root) return nullptr;
16        TreeNode* left = dfs(root->left, res);
17        if(root) res.push_back(root->val);
18        TreeNode* right = dfs(root->right, res);
19        
20        if(right) res.push_back(right->val);
21        return right;
22
23
24    }
25    int kthSmallest(TreeNode* root, int k) {
26        vector <int> res;
27        dfs(root, res);
28        return res[k - 1];
29        
30    }
31};
32