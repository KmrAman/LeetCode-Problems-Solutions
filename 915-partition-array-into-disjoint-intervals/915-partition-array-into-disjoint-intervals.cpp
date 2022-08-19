class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size(),ans=1;
        // if()
        int mx=nums[0],cur=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<mx){
                ans=i+1;
                mx=cur;
            }
            else if(nums[i]>cur){
                cur=nums[i];
            }
        }
        return ans;
        
    }
};