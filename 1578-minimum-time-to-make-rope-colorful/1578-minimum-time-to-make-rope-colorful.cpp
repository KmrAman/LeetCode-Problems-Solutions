class Solution {
public:
    int minCost(string col, vector<int>& t) {
        if(col.size()==1)
            return 0;
        int temp=0;
        string ans="";
        int res=0;
        ans+=col[0];
        for(int i=1;i<col.size();i++){
            if(ans[ans.size()-1]==col[i]){
                if(t[temp]>t[i]){
                    res+=t[i];
                }
                else{
                    res+=t[temp];
                    temp=i;
                }
            }
            else{
                ans+=col[i];
                temp=i;
            }
        }
        return res;
    }
};