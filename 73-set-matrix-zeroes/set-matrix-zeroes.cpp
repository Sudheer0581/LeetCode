class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int row=m.size();
        int col=m[0].size();
        vector<int>rows(m.size(),0);
        vector<int>cols(m[0].size(),0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(m[i][j]==0){
                    rows[i]=1;
                    cols[j]=1;
                }
            }
        }
        for(int i=0;i<row;i++){
            if(rows[i]){
                for(int j=0;j<col;j++){
                    m[i][j]=0;
                }
            }
        }

        for(int i=0;i<col;i++){
            if(cols[i]){
                for(int j=0;j<row;j++){
                    m[j][i]=0;
                }
            }
        }
     }
};


      