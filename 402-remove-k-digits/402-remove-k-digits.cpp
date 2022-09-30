class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        stack<char> st;
        for(auto x:num){
            while(!st.empty() && k>0 && st.top()>x){
                st.pop();
                k--;
            }
            
            if(!st.empty() || x!='0')
                st.push(x);
        }
        
        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        if(st.empty())
            return "0";
        while(!st.empty()){
            num[n-1]=st.top();
            st.pop();
            n--;
        }
        return num.substr(n);
        
    }
};