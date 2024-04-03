class Solution {
public:
    bool fun(int i,int j,vector<vector<int>>&res,int k,string word,vector<vector<char>>& board,int n,int u,int v){
        if(k>=n){
            return 1;
        }
        if(i<0 or i>=u or j<0 or j>=v or board[i][j]!=word[k]){
            return 0;
        }
        if(res[i][j]==0){
            res[i][j]=1;
            bool up=fun(i-1,j,res,k+1,word,board,n,u,v);
            bool down=fun(i+1,j,res,k+1,word,board,n,u,v);
            bool left=fun(i,j-1,res,k+1,word,board,n,u,v);
            bool right=fun(i,j+1,res,k+1,word,board,n,u,v);
            res[i][j]=0;
            return up || down || left || right;
        }
        return 0;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=word.size();
        int u=board.size();
        int v=board[0].size();
        if (n == 0 || word.empty()) {
            return false;
        }
        vector<vector<int>> res(u, vector<int>(board[0].size(), 0));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    if(fun(i,j,res,0,word,board,n,u,v)){
                        return 1;
                    }
                }
            }
        }
        return 0;
    }
};

