//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int solve(int n,vector<int> &arr,int target,vector<vector<int>> &dp){
        if(target==0){
            return 1;
        }
        if(n==0){
            return 0;
        }
        if(dp[n][target]!=-1){
            return dp[n][target];
        }
        int ans=(solve(n-1,arr,target-arr[n-1],dp)|| solve(n-1,arr,target,dp));
        return dp[n][target]=ans;
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        vector<vector<int>> dp(arr.size()+1,vector<int> (sum+1,-1));
        return solve(arr.size(),arr,sum,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends