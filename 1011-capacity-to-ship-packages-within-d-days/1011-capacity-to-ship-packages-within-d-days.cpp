class Solution {
public:
    bool Isvalid(vector<int>& nums,int k,int mx){
        int days=1;
        int sum=0;
        for(int i:nums){
            sum+=i;
            if(sum>mx){
                days++;
                sum=i;
            }
            if(days>k)
                return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& w, int days) {
        int start=*max_element(w.begin(),w.end());
        int end=accumulate(w.begin(),w.end(),0);
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(Isvalid(w,days,mid)){
                res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res;
        
    }
};