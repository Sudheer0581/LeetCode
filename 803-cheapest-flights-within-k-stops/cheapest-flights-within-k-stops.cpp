class Solution {
public:
    int dp[101][1001];
    int Fun(int src,int dst,int k,vector<pair<int,int>>adj[]){
        if(k<0){
            return 1e9;
        }
        if(src==dst){
            return 0;
        }
        if(k==0){
            if(src==dst){
                return 0;
            }
            return 1e9;
        }
        if(dp[src][k]!=-1) return dp[src][k];
        int x=1e9;
        for(auto it:adj[src]){
            x=min(x,it.second+Fun(it.first,dst,k-1,adj));
        }
        return dp[src][k]=x;
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        memset(dp,-1,sizeof(dp));
        vector<pair<int,int>>adj[n+1];
        for(int i=0;i<flights.size();i++){
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
        int x=Fun(src,dst,k+1,adj);
        if(x==1e9){
            return -1;
        }
        return x;

    }
};