class Solution {
public:
    int dp[10001];
    int Fun(vector<int>&nums,int t,int s){
        if(s==t){
            return 1;
        }
        if(s>t){
            return 0;
        }
        if(dp[s]!=-1) return dp[s];
        int x=0;
        for(int i=0;i<nums.size();i++){
          x+=Fun(nums,t,s+nums[i]);
        }
         return dp[s]=x;
    }
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        return Fun(nums,target,0);
    }
};
