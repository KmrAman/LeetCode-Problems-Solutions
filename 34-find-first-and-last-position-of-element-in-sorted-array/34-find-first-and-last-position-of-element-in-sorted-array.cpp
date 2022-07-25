class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        ans[0]=first(nums,target);
        ans[1]=last(nums,target);
        return ans;
    }
    
public:
    int first(vector<int>& a,int t){
        int idx=-1;
        int s=0,l=a.size()-1;
        while(s<=l){
            int mid=(s+l)/2;
            if(a[mid]>=t)
                l=mid-1;
            else
                s=mid+1;
            if(a[mid]==t)
                idx=mid;
        }
        return idx;
    }
public:
    int last(vector<int>& a,int t){
        int idx=-1;
        int s=0,l=a.size()-1;
        while(s<=l){
            int mid=(s+l)/2;
            if(a[mid]<=t)
                s=mid+1;
            else
                l=mid-1;
            if(a[mid]==t)
                idx=mid;
        }
        return idx;
    }
};