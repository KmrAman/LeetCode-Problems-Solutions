class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()<=1)
            return 0;
        if(nums[0]==0)
            return -1;
        int steps=nums[0],n=nums.size();
        int max_reach=nums[0];
        int jumps=1;
        for(int i=1;i<n;i++){
            if(i==n-1)
                return jumps;
            max_reach=max(max_reach,i+nums[i]);
            steps--;
            if(steps==0){
                steps=max_reach-i;
                jumps++;
            }
        }
        return jumps;
    }
};