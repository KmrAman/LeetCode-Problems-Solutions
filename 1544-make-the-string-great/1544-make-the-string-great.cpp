class Solution {
public:
    string makeGood(string s) {
        stack<int> st;
        for(auto &x:s){
            if(st.empty()){
                st.push((int)x);
                continue;
            }
            if(st.top()-32==(int)x || st.top()+32==(int)x){
                st.pop();
            }
            else
                st.push((int)x);
        }
        string ans="";
        while(!st.empty()){
            ans=(char)st.top()+ans;
            st.pop();
        }
        return ans;
    }
};