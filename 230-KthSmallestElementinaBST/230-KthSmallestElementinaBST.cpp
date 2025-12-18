// Last updated: 12/18/2025, 11:44:33 AM
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
12 // here i am using bst property of sort using dfs with TC O(n) & SC O(h);
13class Solution {
14public:
15    void dfs(TreeNode* root, vector<int>& res, int k){
16        if(!root) return;
17        dfs(root->left, res, k);
18        if(res.size() < k)res.push_back(root->val);
19        dfs(root->right, res, k);
20
21
22
23    }
24    int kthSmallest(TreeNode* root, int k) {
25        vector <int> res;
26        dfs(root, res, k);
27        return res[k - 1];
28        
29    }
30};
31