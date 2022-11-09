class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),ans=0;
        int pos= max_element(height.begin(),height.end())-height.begin();
        int res=height[pos];
        int Lmax=height[0];
        for(int i=0;i<pos;i++){
            Lmax=max(height[i],Lmax);
            ans+=min(Lmax,res)-height[i];
        }
        int Rmax=height[n-1];
        for(int i=n-1;i>pos;i--){
            Rmax=max(Rmax,height[i]);
            ans+=min(res,Rmax)-height[i];
        }
        return ans;
    }
};