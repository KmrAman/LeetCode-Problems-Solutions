class Solution {
public:
    void backtracking(int ind,int n,int k,vector<vector<int>> & res,vector<int> &ans){
        if(ind>n+1){
            return;
        }
        if(k==ans.size()){
            res.push_back(ans);
            return;
        }
        ans.push_back(ind);
        backtracking(ind+1,n,k,res,ans);
        ans.pop_back();
        backtracking(ind+1,n,k,res,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> ans;
        backtracking(1,n,k,res,ans);
        return res;
    }
};