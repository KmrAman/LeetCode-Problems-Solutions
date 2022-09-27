class Solution {
public:
    void backtracking(int ind,int target,vector<int>& nums,vector<int> &path, vector<vector<int>> &res) {
        if(target==0){
            res.push_back(path);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1])
                continue;
            if(nums[i]>target)
                break;
            path.push_back(nums[i]);
            backtracking(i+1,target-nums[i],nums,path,res);
            path.pop_back();
        }
    
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> path;
        sort(candidates.begin(),candidates.end());
        backtracking(0,target,candidates,path,res);
        return res;
    }
};