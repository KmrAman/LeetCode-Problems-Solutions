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
    int ans;
public:
    void solve(TreeNode* root,vector<int> &freq){
        if(root==NULL)
            return;
        freq[root->val]++;
        solve(root->left,freq);
        solve(root->right,freq);
        if(root->left==NULL && root->right==NULL){
            int odd_cnt=0;
            for(int i=1;i<=9;i++){
                if(freq[i]%2!=0)
                    odd_cnt++;
            }
            if(odd_cnt<=1)
                ans++;
        }
        freq[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        if(root==NULL)
            return 0;
        vector<int> freq(10,0);
        solve(root,freq);
        
        return ans;
        
    }
};