class Solution {
public:
    void solve(string s,int index,vector<string> &ans,vector<vector<string>> &res){
        if(index==s.size()){
            res.push_back(ans);
            return;
        }
        
        for(int i=index;i<s.size();++i){
            if(IsPalindrome(s,index,i)){
                ans.push_back(s.substr(index,i-index+1));
                solve(s,i+1,ans,res);
                ans.pop_back();
            }
        }
    }
    bool IsPalindrome(string s,int i,int j){
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            
            
            i++;j--;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<string> ans;
        vector<vector<string>> res;
        
        solve(s,0,ans,res);
        
        return res;
    }
};