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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> levels;
        if(root==NULL)
            return levels;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            double temp=0;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                temp+=node->val;
                q.pop();
                if(node->left!=NULL)
                        q.push(node->left);
                if(node->right!=NULL)
                        q.push(node->right);
            }
            double res=(double)(temp/size);
            levels.push_back(res);
        }
        return levels;
    }
};