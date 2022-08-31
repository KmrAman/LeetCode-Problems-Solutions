class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        long sum=0,ans;
        vector<int> nums=nums1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums1.size();i++){
            sum+=abs(nums1[i]-nums2[i]);
        }
        ans=sum;
        for(int i=0;i<nums1.size();i++){
           int diff=abs(nums1[i]-nums2[i]);
            int l=0,h=nums1.size()-1;
            while(l<h){
                int m=l+(h-l)/2;
                if(nums[m]>nums2[i])
                    h=m;
                else
                    l=m+1;
                
                diff=min(diff,abs(nums[m]-nums2[i]));
            }
            diff=min(diff,abs(nums[l]-nums2[i]));
            ans=min(ans,sum-abs(nums1[i]-nums2[i])+diff);
        }
        return ans%1000000007;
    }
};