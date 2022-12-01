class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int mx=INT_MAX,mn=INT_MIN;
        int l=-1,h=nums.size();
        for(int i=0;i<nums.size();i++){
            if(mn<nums[i])
                mn=nums[i];
            else if(mn>nums[i]){
                h=i;
            }
        }
        for(int j=nums.size()-1;j>=0;j--){
            if(mx>nums[j])
                mx=nums[j];
            else if(mx<nums[j]){
                l=j;
            }
        }
        
        return l==-1?0:h-l+1;
        
    }
};