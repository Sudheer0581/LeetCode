class Solution {
public:
    int dp[10001];
    int Fun(int n,vector<int>&cost){
        if(n<0){
            return 0;
        }
        if(n==0 or n==1){
            return cost[n];
        }
        if(dp[n]!=-1) return dp[n];
        int x=cost[n]+Fun(n-1,cost);
        int y=cost[n]+Fun(n-2,cost);
        return dp[n]=min(x,y);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        int n=cost.size();
        return min(Fun(n-1,cost),Fun(n-2,cost));
    }
};
