class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) {
        vector<int> ans;
        for(int i=0;i<q.size();i++){
            int x1=q[i][0],y1=q[i][1],r1=q[i][2];
            int count=0;
            for(int j=0;j<p.size();j++){
                int a=(x1-p[j][0]);
                int b=(y1-p[j][1]);
                if(((a*a)+(b*b))<=(r1*r1))
                    count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};