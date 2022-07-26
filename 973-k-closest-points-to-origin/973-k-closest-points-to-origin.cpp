class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        vector<vector<int>> ans;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<points.size();i++){
            long temp=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            pq.push(make_pair(temp,i));
        }
        n=n-k;
        while(n--){
            pq.pop();
        }
        while(pq.size()>0){
            ans.push_back(points[pq.top().second]);
            pq.pop();
        }
        return ans;
        
    }
};