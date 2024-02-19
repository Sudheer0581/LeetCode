class Solution {
public:
    int dp[1001][1001];
    int Fun(int i,int j,vector<vector<int>>&v,int n){
        if(i==n-1){
            return v[i][j];
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int x=v[i][j]+Fun(i+1,j,v,n);
        int y=v[i][j]+Fun(i+1,j+1,v,n);
        return dp[i][j]=min(x,y);
    }
    int minimumTotal(vector<vector<int>>& v) {
        memset(dp,-1,sizeof(dp));
        int n=v.size();
        return Fun(0,0,v,n);
    }
};