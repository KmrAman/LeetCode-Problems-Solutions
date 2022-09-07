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
    string ans;
    void solve(TreeNode* root){
        if(root==NULL)
            return;
        ans+=to_string(root->val);
        //leaf node
        if(!root->left && !root->right)
            return;
        
        //if left of root is null then "()" will be added to ans
        ans+="(";
        solve(root->left);
        ans+=")";
        
        if(root->right){
            ans+="(";
            solve(root->right);
            ans+=")";
        }
        
        return;
    }
    string tree2str(TreeNode* root) {
        ans="";
        solve(root);
        return ans;
    }
};