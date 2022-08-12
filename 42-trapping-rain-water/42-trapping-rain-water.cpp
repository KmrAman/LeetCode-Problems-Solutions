class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left(n),right(n);
        int max_l=0,max_r=0;
        int ans=0;
        for(int i=0;i<height.size();i++){
            left[i]=max(height[i],max_l);
            max_l=max(height[i],max_l);
        }
        for(int i=n-1;i>=0;i--){
            right[i]=max(height[i],max_r);
            max_r=max(height[i],max_r);
        }
        for(int i=0;i<height.size();i++){
            ans+=(min(left[i],right[i])-height[i]);
        }
        return ans;
    }
};