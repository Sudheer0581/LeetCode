class Solution {
public:
    int dp[1001][1001];
    int Fun(int i,int j,int m,int n,vector<vector<int>>&grid){
        if(i==m-1 and j==n-1){
            return grid[i][j];
        }
        if(i>=m or j>=n){
            return 10000;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int x=grid[i][j]+Fun(i+1,j,m,n,grid);
        int y=grid[i][j]+Fun(i,j+1,m,n,grid);
        return dp[i][j]=min(x,y);
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        int m=grid.size();
        int n=grid[0].size();
        return Fun(0,0,m,n,grid);
    }
};