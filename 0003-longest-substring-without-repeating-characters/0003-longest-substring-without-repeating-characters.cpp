class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0,j=0,i=0;
        unordered_map<char,int> mp;
        while(i<n && j<n){
           if(mp[s[i]]==0){
               mp[s[i++]]++;
               ans=max(ans,i-j);
           }
            else{
                mp[s[j++]]--;
            }
        }
        return ans;
        
    }
};