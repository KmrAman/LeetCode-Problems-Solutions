class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
            int j=i+1,k=n-1;
            while(j<k){
                int sum3=nums[i]+nums[j]+nums[k];
                if(abs(ans-target)>abs(sum3-target)){
                ans=sum3;
            }
            if(sum3==target)
                break;
            if(sum3>target)
                k--;
            else
                j++;
            }
        }
        return ans;
    }
};