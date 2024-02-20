class Solution {
public:
   
    int Fun(int i,int j,int m,vector<vector<int>>&mat,vector<vector<int>>&dp){
        if(i==m-1){
            return dp[i][j]=mat[i][j];
        }
        if(dp[i][j]!=1e9+7) return dp[i][j];
        int x=INT_MAX,y=INT_MAX,z=INT_MAX;
        x=mat[i][j]+Fun(i+1,j,m,mat,dp); 
        if(j>0){
            y=mat[i][j]+Fun(i+1,j-1,m,mat,dp);
        }
        if(j<m-1){
            z=mat[i][j]+Fun(i+1,j+1,m,mat,dp);
        }            
        return dp[i][j]=min(x,min(y,z));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        vector<vector<int>>dp(m,vector<int>(m,1e9+7));
        int ma=INT_MAX;
        for(int i=0;i<m;i++){
            ma=min(ma,Fun(0,i,m,matrix,dp));
        }
        return ma;
    }
};

