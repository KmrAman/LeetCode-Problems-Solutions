class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long pre_sum=0,sum=0;
        int avg1,avg2;
        int res=INT_MAX;
        int n=nums.size(),diff,ans=0;
        for(int x:nums)
            sum+=x;
        if(sum==0)
            return 0;
        for(int i=0;i<n;i++){
            pre_sum+=nums[i];
            sum-=nums[i];
            avg1=pre_sum/(i+1);
            if(n-i-1>0){
                avg2=sum/(n-i-1);
            }
            else
                avg2=sum/(n-i);
            diff=abs(avg1-avg2);
            if(diff<res){
                res=diff;
                ans=i;
                // cout<<diff<<"  "<<i<<endl;
            }
            if(diff==res){
                ans=min(ans,i);
            }
        }
        return ans;
    }
};