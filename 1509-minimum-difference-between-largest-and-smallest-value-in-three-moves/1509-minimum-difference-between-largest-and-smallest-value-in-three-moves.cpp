class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=4)
            return 0;
        sort(nums.begin(),nums.end());
        int ans=nums[n-4]-nums[0]; 
        for(int i=0,j=n-4;j<n;j++,i++){
            ans=min(ans,nums[j]-nums[i]);
        }
        return ans;
        
    }
};