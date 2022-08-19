class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        int mx=nums[0];
        vector<int> res(n);
        res[0]=mx;
        for(int i=1;i<n;i++){
            if(nums[i]>mx){
                mx=max(nums[i],mx);
            }
            res[i]=mx;
        }
        int mn=INT_MAX,ans;
        for(int i=n-1;i>=1;i--){
            mn=min(mn,nums[i]);
            if(mn>=res[i-1])
                ans=i;
        }
        return ans;
        
    }
};