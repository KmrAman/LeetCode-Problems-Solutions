class Solution {
public:
    int rob(vector<int>& nums) {
        int inc;
        int exc=0;
        int exc_n=nums[0];
        for(int i=1;i<nums.size();i++){
            inc=exc+nums[i];
            exc=max(exc,exc_n);
            exc_n=inc;
        }
        return max(exc_n,exc);
        
    }
};