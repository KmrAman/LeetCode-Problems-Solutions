class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int col0=1,row=m.size(),col=m[0].size();
        for(int i=0;i<row;i++){
            if(m[i][0]==0)
                col0=0;
            for(int j=1;j<col;j++){
                if(m[i][j]==0){
                    m[i][0]=m[0][j]=0;
                }
            }
        }
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=1;j--){
                if(m[i][0]==0 || m[0][j]==0)
                    m[i][j]=0;
            }
            if(col0==0)
                m[i][0]=0;
        }
    }
};