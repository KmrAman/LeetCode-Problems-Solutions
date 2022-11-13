class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> f;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                if(i==n/i){
                    f.push_back(i);
                }
                else{
                    f.push_back(i);
                    f.push_back(n/i);
                }
            }
        }
        if(f.size()<k)
            return -1;
        sort(f.begin(),f.end());
        return f[k-1];
    }
};