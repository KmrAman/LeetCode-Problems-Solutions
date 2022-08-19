class Solution {
public:
    int minSetSize(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> count;
        for(int &x:nums)
            count[x]++;
        
        priority_queue<pair<int,int>> pq;
        for(auto &x:count){
            pq.push(make_pair(x.second,x.first));
        }
        int ans=0,t=n;
        // cout<<pq.top().first<<"  "<<pq.top().second;
        while(t>n/2){
            t=t-pq.top().first;
            cout<<t<<"  ";
            pq.pop();
            ans++;
        }
        return ans;
    }
};