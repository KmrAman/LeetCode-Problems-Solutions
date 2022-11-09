class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        while(a|| b || c){
            int a1=a&1,b1=b&1,c1=c&1;
            if((a1|b1)!=c1){
                if(a1&b1==1)
                    ans+=2;
                else
                    ans++;
            }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return ans;
    }
};