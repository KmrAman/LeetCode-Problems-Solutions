class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        for(auto &x:costs){
            if(coins>=x){
                ans++;
                coins-=x;
            }
            else
                break;
        }
        return ans;
    }
};