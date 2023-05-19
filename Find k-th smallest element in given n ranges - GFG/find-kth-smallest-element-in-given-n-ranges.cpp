//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int check(vector<int> arr,int q){
        int l=0,h=arr.size()-1;
        int ans=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]>=q){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        ans.push_back(a[0]);
        int j=0;
        for(int i=1;i<a.size();i++){
            if(ans[j][1]>=a[i][0]){
                ans[j][1]=max(ans[j][1],a[i][1]);
            }
            else{
                ans.push_back(a[i]);
                j++;
            }
        }
        return ans;
    }
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        //Write your code here
        vector<vector<int>> rag=merge(range);
        vector<int> arr(rag.size()),res;
        arr[0]=rag[0][1]-rag[0][0]+1;
        for(int i=1;i<rag.size();i++){
            arr[i]=arr[i-1]+rag[i][1]-rag[i][0]+1;
        }
        for(auto x:queries){
            int ans=check(arr,x);
            // cout<<ans<<endl;
            if(ans==-1){
                res.push_back(-1);
                continue;
            }
            if(ans>0){
                x-=arr[ans-1];
            }
            // cout<<range[ans][0]<<endl;
            int temp=rag[ans][0]+x-1;
            // cout<<temp<<endl;
            res.push_back(temp);
        }
        return res;
    } 
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<vector<int>>range(n, vector<int>(2, 0));
	    for(int i = 0 ; i < n; i++){
	        cin >> range[i][0] >> range[i][1];
	    }
	    int q;
	    cin >> q;
	    vector<int>queries;
	    for(int i = 0 ; i < q; i++){
	        int x;
            cin >> x;
	        queries.push_back(x);
	    }
	    Solution ob;
	    vector<int>ans = ob.kthSmallestNum(n, range, q, queries);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout << endl;
	}
	return 0;
}

// } Driver Code Ends