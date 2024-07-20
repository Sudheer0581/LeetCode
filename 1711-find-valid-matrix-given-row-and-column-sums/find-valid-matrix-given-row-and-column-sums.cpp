class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>>v;
        vector<int>temp;
        for(int i=0;i<rowSum.size();i++){
            for(int j=0;j<colSum.size();j++){
                int m=min(colSum[j],rowSum[i]);
                temp.push_back(m);
                colSum[j]-=m;
                rowSum[i]-=m;
            }
            v.push_back(temp);
            temp.clear();
        }
        return v;
    }
};