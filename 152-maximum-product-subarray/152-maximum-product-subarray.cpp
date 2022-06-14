class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int pro=1;
        int ans=0;
        for(auto &x:nums){
            if(x!=0){
                pro*=x;
                ans=max(ans,pro);
            }
            else{
                pro=1;
            }
        }
        pro=1;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=0){
                pro*=nums[i];
                ans=max(ans,pro);
            }
            else{
                pro=1;
            }
        }
        return ans;
    }
};