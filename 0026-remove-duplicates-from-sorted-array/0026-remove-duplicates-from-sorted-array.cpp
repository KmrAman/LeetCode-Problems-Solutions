class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int k=1;
        for(int i=1;i<nums.size();i++){
            if(nums[k-1]!=nums[i]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};