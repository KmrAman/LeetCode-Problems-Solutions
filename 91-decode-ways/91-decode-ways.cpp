class Solution {
public:
    int numDecodings(string s) {
        vector<int> dp(s.size()+1,-1);
        dp[s.size()]=1;
        return solve(0,s,dp);
    }
    int solve(int i,string s,vector<int> &dp){
        if(dp[i]>-1)
            return dp[i];
        if(s[i]=='0')
            return dp[i]=0;
        
        int res= solve(i+1,s,dp);
        if(i<s.size()-1 && s[i]=='1' || s[i]=='2' && s[i+1]>=48 && s[i+1]<=54)
            res+=solve(i+2,s,dp);
        
        return dp[i]=res;
    }
};