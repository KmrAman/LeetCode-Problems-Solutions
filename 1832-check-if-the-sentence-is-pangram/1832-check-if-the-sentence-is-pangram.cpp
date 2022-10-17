class Solution {
public:
    bool checkIfPangram(string sentence) {
       vector<int> check(26,0);
        for(auto &x:sentence)
            check[x-'a']++;
        for(int i=0;i<26;i++){
            if(check[i]==0)
                return 0;
        }
        return 1;
    }
};