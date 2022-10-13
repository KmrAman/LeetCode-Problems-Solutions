class Solution {
public:
    int nextGreaterElement(int n) {
        string res=to_string(n);
        int size=res.size(),k=size-2,l;
        for(;k>=0;k--){
            if(res[k]<res[k+1]){
                break;
            }
        }
        if(k<0)
            reverse(res.begin(),res.end());
        else{
        for(l=size-1;l>k;l--){
            if(res[l]>res[k]){
                break;
            }
        }
            swap(res[l],res[k]);
        reverse(res.begin()+k+1,res.end());
        }
        if(stoll(res)<=n || stoll(res)>INT_MAX)
            return -1;
        return stoll(res);
    }
};