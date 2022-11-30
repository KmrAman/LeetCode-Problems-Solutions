class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int i=0,j=0;
        while(i<nums.size()){
            if(nums[i]-nums[j]>k){
                ans++;j=i;
            }
            else
                i++;
        }
        
        return ans+1;
    }
};