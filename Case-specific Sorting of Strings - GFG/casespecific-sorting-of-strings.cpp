//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string s1="",s2="";
        int cnt1=0;
        for(int i=0;i<n;i++){
            if(isupper(str[i])){
                s1+=str[i];
                cnt1++;
            }
            else{
                s2+=str[i];
            }
            
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int l=0,k=0;
        for(int i=0;i<n;i++){
            if(isupper(str[i])){
                str[i]=s1[l++];
            }
            else{
                str[i]=s2[k++];
            }
        }
        // cout<<s1;
        return str;
        
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
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends