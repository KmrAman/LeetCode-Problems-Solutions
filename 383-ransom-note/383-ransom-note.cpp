class Solution {
public:
    bool canConstruct(string ransom, string magazine) {
        unordered_map<char,int> mp;
        for(int i=0;i<ransom.size();i++){
            mp[ransom[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            if(mp.find(magazine[i])!=mp.end() && mp[magazine[i]]>0){
                mp[magazine[i]]--;
            }
        }
        for(auto &x:mp){
            if(x.second!=0)
                return false;
        }
        return true;
        
    }
};