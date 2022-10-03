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
    void solve(TreeNode *root , vector<string> &ans , vector<int> path){
        if(root == NULL)
            return ;
        
        path.push_back(root->val);
        
        if(root->left == NULL && root->right == NULL){
            //store the path
            string str = "";
            for(int i = 0 ; i < path.size() ; i++){
                str = str + to_string(path[i]) + "->";
            }
            str.pop_back();
            str.pop_back();
            ans.push_back(str);
        }
        
        solve(root->left , ans , path);
        solve(root->right , ans , path);
        
        path.pop_back();
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        vector<int> path;
        solve(root , ans , path);
        return ans;
    }
};