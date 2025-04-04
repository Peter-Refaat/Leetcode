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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr and q == nullptr)
            return true;
        if(p == nullptr or q == nullptr)
            return false;
        bool ret = 1;
        ret &= isSameTree(p->left,q->left) & (p->val == q->val);
        ret &= isSameTree(p->right,q->right) & (p->val == q->val);
        return ret;
    }
};
