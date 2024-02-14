class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int des) {
        queue<int>Q;
        vector<int>adj[n];
        vector<int>vis(n,0);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        Q.push(source);
        vis[source]=1;
        while(!Q.empty()){
            int top=Q.front();
            Q.pop();
            if(top==des){
                return 1;
            }
            for(auto it:adj[top]){
                if(!vis[it]){
                    Q.push(it);
                    vis[it]=1;
                }
            }
        }
        return 0;

    }
};