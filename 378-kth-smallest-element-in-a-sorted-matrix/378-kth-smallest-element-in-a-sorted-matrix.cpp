class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        int row=m.size(),col=m[0].size();
        int l=m[0][0],h=m[row-1][col-1];
        while(l<h){
            int mid=l+((h-l)/2);
            int temp=col-1;
            int count=0;
            for(int i=0;i<row;i++){
                while(temp>=0 && m[i][temp]>mid){
                    temp--;
                }
                count+=temp+1; 
            }
            if(count>=k)
                    h=mid;
            else
                    l=mid+1;
        }
        return l;
    }
};