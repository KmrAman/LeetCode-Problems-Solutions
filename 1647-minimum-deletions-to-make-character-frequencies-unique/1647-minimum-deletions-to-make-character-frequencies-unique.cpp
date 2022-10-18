class Solution {
public:
    int minDeletions(string s) {
        int ans=0;
        vector<int> cnt(26,0);
        for(auto &x:s){
            cnt[x-'a']++;
        }
        sort(cnt.begin(),cnt.end());
        for(int i=24;i>=0 && cnt[i]>0;--i){
            ans+=max(0,cnt[i]-max(0,cnt[i+1]-1));
            cnt[i]=min(cnt[i],max(0,cnt[i+1]-1));
        }
        return ans;
    }
};