class Solution {
public:
    bool isUgly(int n) {
        vector<int> p={2,3,5};
        if(n<1)
            return false;
        for(auto x:p){
            while(n%x==0){
                n/=x;
            }
        }
        return n==1;
    }
};