class Solution {
public:
    string rankTeams(vector<string>& votes) {
        int n=votes[0].size();
        string ans=votes[0];
        vector<vector<int>> freq(26,vector<int> (n));
        for(auto &str:votes){
            for(int i=0;i<str.size();i++){
                freq[str[i]-'A'][i]++;
            }
        }
        sort(ans.begin(),ans.end(),[&](auto& x, auto& y){
            if(freq[x-'A'] == freq[y-'A'])
                return x<y;
            return freq[x-'A'] > freq[y-'A'];
        });
        
         return ans;
                    
}
             };