class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
                count++;
        }
        if(count==0)
            return 0;
        int n=nums.size();
        int greater=0;
        for(int i=0;i<count;i++){
            if(nums[i]!=1)
                greater++;
        }
        
        int ans=greater;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1)
                greater--;
            if(nums[(i+count)%n]!=1)
                greater++;
            ans=min(ans,greater);
        }
        return ans;
        
    }
};