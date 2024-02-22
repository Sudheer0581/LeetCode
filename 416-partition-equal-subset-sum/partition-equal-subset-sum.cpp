class Solution {
public:
    int dp[1001][10001];
    bool Fun(int idx,int s,vector<int>& nums,vector<vector<int>>&dp){
        if(s==0){
            return true;
        }
        if(s<0 or idx<0){
            return false;
        }
        if(dp[idx][s]!=-1) return dp[idx][s];
        bool x=false;
        if(nums[idx]<=s){
            x=Fun(idx-1,s-nums[idx],nums,dp);
        }
        bool y = Fun(idx-1,s,nums,dp);
        return dp[idx][s]=x || y;
    }
    bool canPartition(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        if(s%2!=0) return false;
        vector<vector<int>> dp(nums.size()+1,vector<int>(s+1,-1));
        return Fun(nums.size()-1,s/2,nums,dp);

    }
};