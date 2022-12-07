//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool check(vector<int> &a,int mid,int k){
        int count=1,temp=0;
        for(int i=1;i<a.size();i++){
            if(a[i]-a[temp]>=mid){
                temp=i;
                count++;
            }
            if(count==k)
            return true;
        }
        return false;
    }
    int solve(int n, int k, vector<int> &a) {
    
        // Write your code here
        sort(a.begin(),a.end());
        int l=1,h=a[n-1]-a[0];
        int ans=-1;
        while(l<=h){
            int mid=(l+h)/2;
            bool flag=check(a,mid,k);
            if(flag){
                ans=mid;
                l=mid+1;
            }
            else
            h=mid-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends