class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>row;
        for(int i=0;i<matrix.size();i++){
            int mrow=INT_MAX;
            for(int j=0;j<matrix[0].size();j++){
                mrow=min(mrow,matrix[i][j]);
            }
            row.push_back(mrow);
        }
        vector<int>col;
        for(int i=0;i<matrix[0].size();i++){
            int mcol=INT_MIN;
            for(int j=0;j<matrix.size();j++){
                mcol=max(mcol,matrix[j][i]);
            }
            col.push_back(mcol);
        }
        vector<int>v;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==row[i] and matrix[i][j]==col[j]){
                    v.push_back(matrix[i][j]);
                }
            }
        }
        return v;
    }
};