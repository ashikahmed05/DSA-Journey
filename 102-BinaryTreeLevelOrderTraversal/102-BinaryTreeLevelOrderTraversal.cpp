// Last updated: 12/16/2025, 3:03:24 PM
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
14
15    void insertdfs(TreeNode* root, vector<vector<int>>& ans, int level){
16        if(!root) return;
17        if(ans.size() == level) ans.push_back({});
18        ans[level].push_back(root->val);
19        insertdfs(root->left, ans, level+1);
20        insertdfs(root->right, ans, level+1);
21        return;
22
23    }
24    vector<vector<int>> levelOrder(TreeNode* root) {
25        vector<vector<int>> answer;
26        insertdfs(root, answer, 0);
27        return answer;
28
29
30        
31    }
32};