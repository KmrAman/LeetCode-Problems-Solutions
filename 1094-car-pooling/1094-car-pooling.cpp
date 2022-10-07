class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int> mp;
        for(auto &x:trips){
            mp[x[1]]+=x[0];
            mp[x[2]]-=x[0];
        }
        for(auto &x:mp){
            capacity-=x.second;
            if(capacity<0)
                return 0;
        }
        
        return 1;
    }
};