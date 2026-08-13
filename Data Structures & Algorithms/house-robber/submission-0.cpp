class Solution {
public:
    int maxamt(int n,vector<int>& nums,vector<int>&dp){
        if(n == 0) return nums[0];
        if(n<0) return 0;
        if(dp[n] != -1) return dp[n];
        return dp[n] = max(nums[n] + maxamt(n-2,nums,dp) , maxamt(n-1,nums,dp));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        return maxamt(n-1,nums,dp);
        
        
    }
};
