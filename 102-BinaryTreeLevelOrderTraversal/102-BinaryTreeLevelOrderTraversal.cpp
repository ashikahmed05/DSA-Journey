// Last updated: 12/16/2025, 3:28:38 PM
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
12 // here i am using dfs with TC O(n), SC O(n);
13class Solution {
14public:
15
16    void insertdfs(TreeNode* root, vector<vector<int>>& ans, int level){
17        if(!root) return;
18        if(ans.size() == level) ans.push_back({});
19        ans[level].push_back(root->val);
20        insertdfs(root->left, ans, level+1);
21        insertdfs(root->right, ans, level+1);
22        return;
23
24    }
25    vector<vector<int>> levelOrder(TreeNode* root) {
26        vector<vector<int>> answer;
27        insertdfs(root, answer, 0);
28        return answer;
29
30
31        
32    }
33};