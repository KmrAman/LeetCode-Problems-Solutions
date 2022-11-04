class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unsigned ans=0,shift=1;
        for(int i=0;i<32;i++){
            int count=0;
            for(auto &x:nums){
                if(x&shift){
                    count++;
                }
            }
            if(count%3!=0){
               ans=ans+shift; 
            }
            shift<<=1;
        }
        return ans;
    }
};