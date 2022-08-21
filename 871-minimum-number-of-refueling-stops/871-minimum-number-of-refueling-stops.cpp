class Solution {
public:
    int minRefuelStops(int target, int cur, vector<vector<int>>& s) {
        int ans=0,i=0;
        priority_queue<int> pq;
        while(cur<target){
            while(i<s.size() && s[i][0]<=cur){
                pq.push(s[i++][1]);
            }
            if(pq.empty())
                return -1;
            cur+=pq.top();
            pq.pop();
            ans++;
        }
        return ans;
    }
};