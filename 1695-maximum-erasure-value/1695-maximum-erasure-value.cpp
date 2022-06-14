class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int i=0,j=0,sum=0,ans=0;
        int n=nums.size();
        unordered_set<int> st;
        while(i<n && j<n){
            if(st.find(nums[j])==st.end()){
                sum+=nums[j];
                ans=max(ans,sum);
                st.insert(nums[j++]);
            }
            else{
                sum-=nums[i];
                st.erase(nums[i++]);
            }
        }
        return ans;
    }
};