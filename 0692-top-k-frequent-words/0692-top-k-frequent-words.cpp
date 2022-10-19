class Solution {
public:
    static bool cmp(pair<int,string> a, pair<int,string> b){
        if(a.first == b.first)
            return a.second<b.second;
        return a.first>b.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        unordered_map<string,int> mp;
        for(auto &x:words){
            mp[x]++;
        }
        vector<pair<int,string>> v;
        for(auto &x:mp){
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};