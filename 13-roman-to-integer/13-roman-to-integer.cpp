class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };
        
        int n=s.size(),sum=0;
        for(int i=0;i<s.size();i++){
            int val=mp[s[i]];
            if(i<n-1 && val<mp[s[i+1]]){
                sum=sum-val;
            }
            else{
                sum=sum+val;
            }
        }
        return sum;
    }
};