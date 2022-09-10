class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans=0;
        while(a>0 && b>0 || b>0 && c>0 || a>0 && c>0 ){
            int first=max(max(a,b),c);
            if(first==a){
                a--;
                if(b>c)
                    b--;
                else
                    c--;
            }
            else if(b==first){
                b--;
                if(a>c)
                    a--;
                else
                    c--;
            }
            else{
                c--;
                if(a>b)
                    a--;
                else
                    b--;
            }
            ans++;
        }
        return ans;
    }
};