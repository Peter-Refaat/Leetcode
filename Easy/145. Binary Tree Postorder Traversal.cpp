/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        rec(root,ans);
        return ans;
    }
    void rec(TreeNode* node , vector<int>& ans)
    {
        if(node==nullptr)
            return;
        rec(node->left,ans);
        rec(node->right,ans);
        ans.push_back(node->val);
    }
};
