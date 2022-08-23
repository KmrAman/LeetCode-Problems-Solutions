class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        stack<int> st;
        int num;
        for(int i=0;i<arr.size();i++){
            num=arr[i];
            while(!st.empty() && st.top()>arr[i]){
                num=max(num,st.top());
                st.pop();
            }
            st.push(num);
        }
        return st.size();
    }
};