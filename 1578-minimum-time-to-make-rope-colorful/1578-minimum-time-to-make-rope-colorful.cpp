class Solution {
public:
    int minCost(string c, vector<int>& t) {
        int n=c.size();
        int ans=0;
        int sum=t[0],mx=t[0];
        for(int i=1;i<n;i++){
            if(c[i]==c[i-1]){
                sum+=t[i];
                mx=max(mx,t[i]);
                
            }
            else{
                ans+=(sum-mx);
                mx=t[i];
                sum=t[i];
            }
            
        }
        ans+=(sum-mx);
        return ans;
    }
};