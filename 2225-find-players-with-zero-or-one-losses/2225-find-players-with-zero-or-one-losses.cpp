class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& m) {
        set<int> st;
        unordered_map<int,int> mp;
        for(int i=0;i<m.size();i++){
            mp[m[i][1]]++;
            if(st.find(m[i][1])!=st.end())
                st.erase(m[i][1]);
            if(mp.find(m[i][0])==mp.end()){
                st.insert(m[i][0]);
            }
            else
                st.erase(m[i][0]);
        }
        vector<int> ans1,ans2;
        vector<vector<int>> ans;
        for(auto &x:st){
            cout<<x<<" ";
            ans1.push_back(x);
        }
        for(auto &x:mp){
            if(x.second==1)
                ans2.push_back(x.first);
        }
        sort(ans2.begin(),ans2.end());
        ans.push_back(ans1);
        ans.push_back(ans2);
        
        return ans;
    }
};