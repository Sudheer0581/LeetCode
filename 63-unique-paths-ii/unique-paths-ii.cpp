class Solution {
public:
    int dp[1001][1001];
    int Fun(int i,int j,int m,int n,vector<vector<int>>&v){
        if(i>=m or j>=n or v[i][j]==1){
            return 0;
        }
        if(i==m-1 and j==n-1){
            return 1;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int x=Fun(i+1,j,m,n,v);
        int y=Fun(i,j+1,m,n,v);
        return dp[i][j]=x+y;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        memset(dp,-1,sizeof(dp));
        int m=v.size();
        int n=v[0].size();
        return Fun(0,0,m,n,v);
    }
};