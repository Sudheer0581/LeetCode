class Solution {
public:
    int dp[10001];
    int Fun(int idx,vector<int>&nums){
        if(idx==0) return nums[idx];
        if(idx<0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int pick = nums[idx]+Fun(idx-2,nums);
        int nonpick=Fun(idx-1,nums);
        return dp[idx]=max(pick,nonpick);
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return Fun(nums.size()-1,nums);
    }
};