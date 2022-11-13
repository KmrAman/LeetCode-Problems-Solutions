class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> pre(arr.size());
        pre[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            pre[i]=pre[i-1]^arr[i];
        }
        vector<int> ans;
        for(auto &x:queries){
            if(x[0]==x[1]){
                ans.push_back(arr[x[0]]);
                continue;
            }
            if(x[0]==0){
                ans.push_back(pre[x[1]]);
            }
            else{
                ans.push_back(pre[x[0]-1]^pre[x[1]]);
            }
        }
        return ans;
    }
};