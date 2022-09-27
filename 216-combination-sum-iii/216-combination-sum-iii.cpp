class Solution {
public:
   void helper(int ind,int target,int k,vector<vector<int>> &res,vector<int> &ans){
        if(target==0 && k==ans.size()){
            res.push_back(ans);
        }
       for(int i=ind;i<=9;i++){
           ans.push_back(i);
           helper(i+1,target-i,k,res,ans);
           ans.pop_back();
       }
       
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> t;
        helper(1,n,k,ans,t);
        return ans;
    }
};