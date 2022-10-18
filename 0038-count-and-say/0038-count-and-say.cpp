class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        string s=countAndSay(n-1);
        int count=0;
        string ans="";
        int l=s.size();
        for(int i=0;i<l;i++){
            count++;
            if(i==l-1 || s[i]!=s[i+1]){
                ans=ans+to_string(count)+s[i];
                count=0;
            }
        }
        return ans;
        
    }
};