class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long ans=1;
        int count=0;
        for(auto x:nums){
            if(count>1)
                break;
            if(x!=0)
                ans*=x;
            else
                count++;
        }
        if(count>1){
            for(int i=0;i<nums.size();i++){
                nums[i]=0;
            }
            return nums;
        }
        int p;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0 && count==0)
                nums[i]=ans/nums[i];
            else if(nums[i]!=0 && count>0){
                nums[i]=0;
            }
            else
                nums[i]=ans;
        }
        return nums;
    }
};