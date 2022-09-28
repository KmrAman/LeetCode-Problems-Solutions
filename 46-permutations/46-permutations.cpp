class Solution {
public:
    void generate(int ind,vector<int> &nums,vector<bool> &freq,vector<vector<int>> &res,vector<int> &ans){
        if(ans.size()==nums.size()){
            res.push_back(ans);
                return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ans.push_back(nums[i]);
                freq[i]=true;
                generate(i+1,nums,freq,res,ans);
                ans.pop_back();
                freq[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        vector<bool> freq(nums.size(),false);
        generate(0,nums,freq,res,ans);
        return res;
    }
};