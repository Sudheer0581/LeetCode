class Solution {
public:
    long long int dp[1001];
    int fun(vector<int>piles,int i){
        if(i>=piles.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int pick = piles[i]+fun(piles,i+1);
        int nonpick = piles[piles.size()-i-1]+fun(piles,i+1);
        return dp[i] = max(pick,nonpick);
    }
    bool stoneGame(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        int x = fun(piles,0);
        int y = fun(piles,1);
        if(x>y) return true;
        return false;

    }
};