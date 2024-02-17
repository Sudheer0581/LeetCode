class Solution {
public:
    int dp[10001];
    int Fun(int n){
        if(n==0){
            return 1;
        }
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=Fun(n-1)+Fun(n-2);
    }
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        return Fun(n);
    }
};