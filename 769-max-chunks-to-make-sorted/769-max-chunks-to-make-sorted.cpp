class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> res=arr;
        int ans=0;
        sort(arr.begin(),arr.end());
        int sum1=0,sum2=0;
        for(int i=0;i<arr.size();i++){
            sum1+=arr[i];
            sum2+=res[i];
            if(sum1==sum2)
                ans++;
        }
        return ans;
    }
};