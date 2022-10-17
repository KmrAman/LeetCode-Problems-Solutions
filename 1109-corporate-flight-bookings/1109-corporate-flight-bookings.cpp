class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> res(n,0);
        for(auto &x:bookings){
            res[x[0]-1]+=x[2];
            if(n>x[1])
                res[x[1]]-=x[2];
        }
        for(int i=1;i<n;i++){
            res[i]=res[i-1]+res[i];
        }
        return res;
    }
};