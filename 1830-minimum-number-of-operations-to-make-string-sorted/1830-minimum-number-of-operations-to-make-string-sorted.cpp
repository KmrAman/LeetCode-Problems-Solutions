class Solution {
public:
    #define MOD 1000000007

long long int modpow(int num) {
    long long int ans = 1, base = (long long) num;
    int power = MOD - 2;
    while (power > 0) {
        if (power == 1) {
            return (ans * base) % MOD;
        }
        if (power % 2 == 0) {
            base = (base * base) % MOD;
            power /= 2;
        } else {
            ans = (ans * base) % MOD;
            power--;
        }
    }
    return ans;
}

    int makeStringSorted(string s) {
         unordered_map<int,int>m;
      int n=s.length();
      
       vector<long long> fact(s.length() + 1, 1ll);
        for (int i = 1; i <= s.size(); i++){
            fact[i] = (fact[i - 1] * i)%MOD;
        }
      long long ans=0;
      
     for(int i=n-1;i>=0;i--){
        long long  count=0;
        m[s[i]-'a']++;
        long long res=1;
      
	    for(auto x:m){
            res= (res*fact[x.second])%MOD;
             if(x.first<(s[i]-'a')){
                 count+=x.second;
            }
       }
       
        ans=ans+  ((count*(fact[n-i-1]))%MOD)*(int)modpow(res);
        ans=ans%MOD;
    }
        return ans;
    }     
};