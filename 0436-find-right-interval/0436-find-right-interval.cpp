class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& A) {
        map<int,int> mp;
        for(int i=0;i<A.size();i++){
            mp[A[i][0]]=i;
        }
        vector<int> res(A.size());
        for(int i=0;i<A.size();i++){
            res[i]=mp.lower_bound(A[i][1])!=end(mp)?mp.lower_bound(A[i][1]) -> second:-1;
        }
        return res;
    }
};