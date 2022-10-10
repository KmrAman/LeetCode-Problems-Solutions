class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int> freq(20001,0);
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]+10000]++;
        }
        int ret=0;
        int flag=0;
        for(int i=0;i<20001;){
            if(freq[i]>0&&flag==0){
                ret=ret+i-10000;
                flag=1;
                freq[i]--;
            }else if((freq[i]>0)&&(flag==1)){
                freq[i]--;
                flag=0;
            }else i++;
        }
        return ret;
    }
};