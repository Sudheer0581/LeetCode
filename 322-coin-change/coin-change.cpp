class Solution {
public:
    // int dp[1001][1001];
    int Fun(int idx,int sum,vector<int>&coins,int c,vector<vector<int>>& dp){
        if(idx==-1){
            if(sum==0){
                return 0;
            }
            return 10001;
        }

        
        if(sum<0 || idx<0){
            return 10001;
        }
        if(sum==0){
            return 0;
        }
        
        if(dp[idx][sum]!=-1) return dp[idx][sum];
        int x=1+Fun(idx,sum-coins[idx],coins,c,dp);
        int y=Fun(idx-1,sum,coins,c,dp);
        return dp[idx][sum]=min(x,y);

    }
    int coinChange(vector<int>& coins, int sum) {
        // memset(dp,-1,sizeof(dp));
        vector<vector<int>> dp(coins.size()+1,vector<int>(sum+1,-1));
        int c=0;
        int x= Fun(coins.size()-1,sum,coins,c,dp);
        if(x==10001){
            return -1;
        }
        return x;
    }
};