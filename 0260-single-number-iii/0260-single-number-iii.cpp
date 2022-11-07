class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto &x:nums)
            ans^=x;
        int pos;
        for(int i=31;i>=0;i--){
            if((ans&(1<<i))){
                pos=i;
                break;
            }
        }
        int num1=0,num2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&(1<<pos))
                num1^=nums[i];
            else
                num2^=nums[i];
        }
        
        vector<int> res;
        res.push_back(num1);
        res.push_back(num2);
        
        return res;
    }
};