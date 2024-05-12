class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>res(n-2,vector<int>(n-2));
        for(int i=1;i<n-1;i++){
            for(int j=1;j<n-1;j++){
                int t=0;
                for(int k=i-1;k<=i+1;k++){
                    for(int x=j-1;x<=j+1;x++){
                        t=max(t,grid[k][x]);
                    }
                }
                res[i-1][j-1]=t;
            }
        }
        return res;
    }
};