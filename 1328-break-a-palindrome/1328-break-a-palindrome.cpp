class Solution {
public:
    string breakPalindrome(string p) {
        int n=p.size();
        if(n==1){
            return "";
        }
        int flag=1;
        for(int i=0;i<n/2;i++){
            if(p[i]!='a'){
                p[i]='a';
                flag=0;
                break;
            }
        }
        if(flag==1){
            p[n-1]='b';
        }
        return p;
    }
};