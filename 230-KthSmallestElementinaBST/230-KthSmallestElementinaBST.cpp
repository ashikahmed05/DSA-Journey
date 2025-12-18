// Last updated: 12/18/2025, 11:37:21 AM
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
14    void dfs(TreeNode* root, vector<int>& res){
15        if(!root) return;
16        dfs(root->left, res);
17        res.push_back(root->val);
18        dfs(root->right, res);
19
20
21
22    }
23    int kthSmallest(TreeNode* root, int k) {
24        vector <int> res;
25        dfs(root, res);
26        return res[k - 1];
27        
28    }
29};
30