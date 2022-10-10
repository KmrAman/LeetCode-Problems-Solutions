class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(auto &x:s){
            mp[x]++;
        }
        int flag=1,ans=0;
        for(auto &x:mp){
            if(x.second%2!=0 && flag){
                ans+=x.second;
                flag=0;
            }
            else if(x.second%2!=0 && !flag){
                ans+=(x.second-1);
            }
            else{
                ans+=x.second;
            }
        }
        return ans;
    }
};