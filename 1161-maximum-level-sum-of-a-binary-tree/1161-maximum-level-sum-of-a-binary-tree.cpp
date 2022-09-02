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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans,mx=INT_MIN,count=0;
        while(!q.empty()){
            count++;
            int temp=0;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                temp+=node->val;
                q.pop();
                if(node->left!=NULL)
                        q.push(node->left);
                if(node->right!=NULL)
                        q.push(node->right);
            }
            if(temp>mx){
                ans=count;
                mx=temp;
            }
        }
        return ans;
    }
};