class Solution {
public:
    bool isPossible(vector<int>& nums) {
        if(nums.size()<3)
            return  0;
        unordered_map<int,int> mp,mp1;
        for(int x:nums){
            mp[x]++;
        }
        for(int x:nums){
            if(mp[x]==0)
                continue;
            if(mp1[x-1]>0){
                mp1[x-1]--;
                mp1[x]++;
            }
            else if(mp[x+1]>0 && mp[x+2]>0){
                mp[x+1]--;
                mp[x+2]--;
                mp1[x+2]++;
            }
            else
                return 0;
            
            mp[x]--;
        }
        return 1;
        
    }
};