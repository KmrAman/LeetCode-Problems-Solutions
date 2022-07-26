/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL|| root==p||root==q)
            return root;
        TreeNode* l_lca=lowestCommonAncestor(root->left,p,q);
        TreeNode* r_lca=lowestCommonAncestor(root->right,p,q);
        if(l_lca && r_lca)
            return root;
        if(l_lca!=NULL)
            return l_lca;
        else
            return r_lca;
    }
};