class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j,k=1;
        int max_len=0,zero_count=0;
        for(j=0;j<nums.size();j++){
            if(nums[j]==0)
                zero_count++;
            while(zero_count>k){
                if(nums[i]==0)
                    zero_count--;
                i++;
            }
            max_len=max(max_len,j-i+1);
        }
        return max_len-1;
    }
};