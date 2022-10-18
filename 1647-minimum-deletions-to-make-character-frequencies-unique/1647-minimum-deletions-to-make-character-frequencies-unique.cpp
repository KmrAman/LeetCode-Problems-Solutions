class Solution {
public:
    int minDeletions(string s) {
        priority_queue<int> pq;
        unordered_map<char,int> mp;
        unordered_map<int,int> mp1;
        for(auto &x:s){
            mp[x]++;
        }
        for(auto &x:mp){
            pq.push(x.second);
        }
        mp1[pq.top()]++;
        pq.pop();
        int ans=0;
        while(!pq.empty()){
            int temp=pq.top();
            while(mp1[temp]>0 && temp!=0){
                temp--;
                ans++;
            }
            mp1[temp]++;
            pq.pop();
        }
        return ans;
    }
};