class Solution {
public:
    int dp[1001][10001];
    int Fun(int idx,int sum,vector<int>&coins){
        if(sum==0){
            return 1;
        }
        if(sum<0 or idx<0){
            return 0;
        }
        if(dp[idx][sum]!=-1) return dp[idx][sum];
        int x=0;
        if(coins[idx]<=sum){
            x=Fun(idx,sum-coins[idx],coins);
        }
        int y=Fun(idx-1,sum,coins);
        return dp[idx][sum]=x+y;

    }
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        return Fun(coins.size()-1,amount,coins);
    }
};