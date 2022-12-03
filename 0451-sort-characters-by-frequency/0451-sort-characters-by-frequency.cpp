class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>> A;
        for(auto &x:mp){
            A.push_back(x);
        }
        sort(A.begin(),A.end(),cmp);
        string s1="";
        for(auto &x:A){
            for(int i=0;i<x.second;i++){
                s1+=x.first;
                cout<<x.first;
            }
        }
        return s1;
        
    }
    
public:
    static bool cmp(pair<char,int>&a, pair<char,int>&b) {
        return  (a.second==b.second) ? a.first<b.first : a.second>b.second;
    }
};