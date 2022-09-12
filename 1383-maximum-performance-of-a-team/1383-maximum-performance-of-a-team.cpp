class Solution {
public:
    int maxPerformance(int n, vector<int>& s, vector<int>& e, int k) {
       vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({e[i],s[i]});
        }
        priority_queue<int,vector<int>,greater<int>> pq;
        sort(v.rbegin(),v.rend());
        long long sum=0,ans=0;
        for(auto &x:v){
            int speed=x.second,eff=x.first;
            sum+=speed;
            pq.push(speed);
            if(pq.size()>k){
                sum-=pq.top();
                pq.pop();
            }
            ans=max(ans,sum*eff);
        }
        return ans%1000000007;
    }
};