class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(mp[t[i]]>0)
                mp[t[i]]--;
            else{
                return false;
            }
        }
         for(auto &x:mp){
            if(x.second!=0)
                return false;
        }
        return true;
    }
};