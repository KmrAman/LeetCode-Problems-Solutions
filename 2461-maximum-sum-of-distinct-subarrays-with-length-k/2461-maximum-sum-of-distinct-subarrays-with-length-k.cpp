class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=LONG_MIN,sum=0;
        unordered_map<int,int> mp;
        int count=0,i=0,j=0,n=nums.size();
        while(i<n && j<n){
            if(count<k){
                if(mp[nums[i]]==0){
                    sum+=nums[i];
                    mp[nums[i]]++;
                    count++;
                    i++;
                }
                else{
                    sum-=nums[j];
                    mp[nums[j]]--;
                    count--;
                    j++;
                }
            }
            else{
                ans=max(ans,sum);
                sum-=nums[j];
                mp[nums[j]]--;
                j++;
                count--;
            }
        }
        if(count==k)
            ans=max(ans,sum);
        return ans==LONG_MIN?0:ans;
    }
};