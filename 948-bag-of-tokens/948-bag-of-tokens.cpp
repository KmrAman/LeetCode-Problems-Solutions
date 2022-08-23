class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int p) {
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1,ans=0;
        int res=0;
        while(i<=j){
            if(p>=tokens[i]){
                p-=tokens[i++];
                res=max(res,++ans);
            }
            else if(ans>0){
                p+=tokens[j--];
                ans--;
                }
            else{
                break;
            }
        }
        return res;
        
    }
};