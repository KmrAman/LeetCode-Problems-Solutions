class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        int k=0;
        while(s[k]==' '){
            k++;
        }
        while(s[n-1]==' ')
            n--;
        int i=n-1,j=n;
        while(i>=k){
            if(s[i]==' '){
                ans+=(s.substr(i+1,j-i-1));
                ans+=" ";
                while(s[i]==' '){
                    i--;
                }
                j=i+1;
            }
            if(i==k){
               ans+=(s.substr(k,j-k));
                return ans;
            }
            i--;
        }
        return ans;
    }
};