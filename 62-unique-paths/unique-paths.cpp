class Solution {
public:
    int dp[100][100];
    int Fun(int i,int j,int m,int n){
        if(i==m-1 or j==n-1){
            return 1;
        }
        if(i>=m){
            return 0;
        }
        if(j>=n){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int x=Fun(i+1,j,m,n);
        int y=Fun(i,j+1,m,n);
        return dp[i][j]=(x+y);

    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return Fun(0,0,m,n);
    }
};