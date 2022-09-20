class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& A, vector<int>& B) {
        vector<vector<int>> ans;
        int n=A.size();
        int i=0;
        while(i<n){
            if(A[i][0]<B[0]){
                ans.push_back(A[i]);
                i++;
            }
            else
                break;
        }
        if(ans.size()==0 || ans.back()[1]<B[0]){
            ans.push_back(B);
        }
        else{
            ans.back()[1]=max(ans.back()[1],B[1]);
        }
        while(i<n){
            if(ans.back()[1]>=A[i][0]){
                ans.back()[1]=max(ans.back()[1],A[i][1]);
            }
            else
                ans.push_back(A[i]);
            
            i++;
        }
        return ans;
        
    }
};