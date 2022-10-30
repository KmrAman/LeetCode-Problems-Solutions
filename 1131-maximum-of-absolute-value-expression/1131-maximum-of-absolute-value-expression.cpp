class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        vector<int> maxArray(4,INT_MIN);
        vector<int> minArray(4,INT_MAX);
        vector<int> sign{1,-1};
        for(int i=0;i<arr1.size();i++){
            int j=0;
            for(int k=0;k<2;k++){
                for(int l=0;l<2;l++){
                    int cur=sign[k]*arr1[i]+sign[l]*arr2[i]+i;
                    maxArray[j]=max(maxArray[j],cur);
                    minArray[j]=min(minArray[j],cur);
                    j++;
                }
            }
        }
        int ans=0;
        for(int i=0;i<4;i++){
            ans=max(ans,maxArray[i]-minArray[i]);
        }
        return ans;
    }
};