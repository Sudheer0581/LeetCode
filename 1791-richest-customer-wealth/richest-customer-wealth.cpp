class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=0;
        for(int i=0;i<accounts.size();i++)
        {
            int s=0;
            for(int j=0;j<accounts[0].size();j++)
            {
                s+=accounts[i][j];
            }
            if(s>m){
                m=s;
            }
        }
        return m;
    }
};
