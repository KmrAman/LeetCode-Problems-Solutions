class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        if(n==0 || n==1)
            return nums;
        int i,j=0,cnt=0;
        vector<int> res;
        for(i=0;i<n;i++){
            if(nums[i]<pivot)
                nums[j++]=nums[i];
            else if(nums[i]==pivot)
                cnt++;
            else
                res.push_back(nums[i]);
        }
        while(cnt--)
            nums[j++]=pivot;
        for(i=0;i<res.size();i++){
            nums[j++]=res[i];
        }
             
        return nums;
    }
};