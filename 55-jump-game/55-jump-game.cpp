class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)
            return 1;
        if(nums[0]==0)
            return 0;
        int steps=nums[0];
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
            if(i>=max_reach)
            return 0;
        }
        return 1;
    }
};