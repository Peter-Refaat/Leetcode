/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left, root->right);
    }
    bool isMirror(TreeNode* u, TreeNode* v) {
        if (u == nullptr and v == nullptr)
            return true;
        if (u == nullptr or v == nullptr)
            return false;
        bool ret = 1;
        ret &= isMirror(u->left, v->right) & isMirror(u->right, v->left) & (u->val == v->val);
        return ret;
    }
};
