class Solution { 
public: 
    int maxamt(int n, int start, vector<int>& nums, vector<int>& dp){ 
        if(n < start) return 0;
        if(n == start) return nums[start];

        if(dp[n] != -1) return dp[n]; 

        return dp[n] = max(
            nums[n] + maxamt(n-2, start, nums, dp),
            maxamt(n-1, start, nums, dp)
        ); 
    } 

    int rob(vector<int>& nums) { 
        int n = nums.size();

        if(n == 1) return nums[0];

        vector<int> dp1(n, -1); 
        int case1 = maxamt(n-2, 0, nums, dp1);   // exclude last

        vector<int> dp2(n, -1); 
        int case2 = maxamt(n-1, 1, nums, dp2);   // exclude first

        return max(case1, case2); 
    } 
};