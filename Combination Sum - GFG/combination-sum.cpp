//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void solve(int ind,int target,vector<int> &A,vector<int> &ans,vector<vector<int>>&res){
        if(ind==A.size()){
            if(target==0){
                res.push_back(ans);
            }
            return;
        }
        if(A[ind]<=target){
            ans.push_back(A[ind]);
            solve(ind,target-A[ind],A,ans,res);
            ans.pop_back();
        }
        solve(ind+1,target,A,ans,res);
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        unordered_set<int> st;
        for(auto &x:A){
            st.insert(x);
        }
        vector<int> arr;
        for(auto &x:st){
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        vector<int> ans;
        vector<vector<int>> res;
        solve(0,B,arr,ans,res);
        
        return res;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends