class Solution {
public:
    int count_bits(int n){
        int ans=0;
        while(n!=0){
            n&=(n-1);
            ans++;
        }
        return ans;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> res;
        for(auto &x:arr){
            int count=count_bits(x);
            res.push_back({count,x});
        }
        sort(res.begin(),res.end());
        vector<int> ans;
        for(auto &x:res){
            ans.push_back(x.second);
        }
        return ans;
    }
};