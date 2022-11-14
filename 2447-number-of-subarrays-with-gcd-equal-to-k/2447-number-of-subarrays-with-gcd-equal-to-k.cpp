class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
    int ans = 0;
        int n=nums.size();
    for (int i = 0; i < n; i++) {
        int cur_gcd = 0;
        for (int j = i; j < n; j++) {
            cur_gcd = __gcd(cur_gcd, nums[j]);
            ans += (cur_gcd == k);
        }
    }
    return ans;
    }
};