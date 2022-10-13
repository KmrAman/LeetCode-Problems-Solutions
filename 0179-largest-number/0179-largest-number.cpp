class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](int a,int b){
            return to_string(a)+to_string(b)>to_string(b)+to_string(a);
        });
        string ans="";
        for(auto &x:nums){
            ans+=to_string(x);
        }
        if(ans[0]=='0')
            return "0";
        return ans;
    }
};