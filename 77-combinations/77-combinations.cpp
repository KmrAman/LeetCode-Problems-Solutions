class Solution {
public:
    void backtracking(int ind,int n,int k,vector<vector<int>> & res,vector<int> &ans){
        if(k==ans.size()){
            res.push_back(ans);
            return;
        }
        for(int i=ind;i<=n;i++){
            ans.push_back(i);
            backtracking(i+1,n,k,res,ans);
            ans.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> ans;
        backtracking(1,n,k,res,ans);
        return res;
    }
};