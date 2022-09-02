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
    bool IsBST(TreeNode* root,long mn,long mx){
        if(root==NULL)
            return 1;
        if(root->val<=mn || root->val>=mx)
            return 0;
        return (IsBST(root->left,mn,root->val) && IsBST(root->right,root->val,mx));
    }
    bool isValidBST(TreeNode* root) {
        
        return IsBST(root,LONG_MIN,LONG_MAX);
    }
    
};