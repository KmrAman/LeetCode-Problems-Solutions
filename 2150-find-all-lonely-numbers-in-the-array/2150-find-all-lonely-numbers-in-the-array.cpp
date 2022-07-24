class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int a:nums){
            mp[a]++;
        }
        vector<int> ans;
        for(int a:nums){
            if(mp.find(a+1)==mp.end() && mp.find(a-1)==mp.end() && mp[a]==1){
                ans.push_back(a);
            }
        }
        return ans;
    }
};