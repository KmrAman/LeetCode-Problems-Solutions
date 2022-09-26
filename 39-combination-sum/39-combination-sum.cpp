class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> path;
        backtracking(0,target,candidates,path,res);
        return res;
    }
private:
    void backtracking(int ind,int target,vector<int>& nums,vector<int> &path, vector<vector<int>> &res) {
        if(ind==nums.size()){
            if (target == 0) {
            res.push_back(path);
            }
            return;
        }
        
        if(nums[ind]<=target){
            path.push_back(nums[ind]);
            backtracking(ind,target-nums[ind],nums,path,res);
            path.pop_back();
        }
        backtracking(ind+1,target,nums,path,res);
    
    }
};