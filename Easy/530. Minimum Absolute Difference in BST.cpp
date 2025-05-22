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
private:
    vector<int>v;
public:
    void traverse(TreeNode* node)
    {
        if(node == nullptr)
            return;
        traverse(node->left);
        v.push_back(node->val);
        traverse(node->right);
    }
    int getMinimumDifference(TreeNode* root) {
        traverse(root);
        int ans = 1e9;
        int n = v.size();
        for(int i = 1 ; i < n ; ++i)
            ans = min(ans,v[i] - v[i-1]);
        return ans;
    }
};
