class Solution {
public:
    int findLength(vector<int>& nums, vector<int>& nums2) {
       int n=nums.size(),m=nums2.size();
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0)
                    dp[i][j]=0;
            }
        }
        int ans=0;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(nums[i-1]==nums2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                    ans=max(ans,dp[i][j]);
                }
                else
                    dp[i][j]=0;
            }
        }
        return ans;
    }
};