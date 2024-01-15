class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mp1;
        map<int,int>mp2;
        vector<vector<int>>v;
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<matches.size();i++){
            for(int j=0;j<matches[0].size();j++){
                if(j==0){
                    mp1[matches[i][j]]++;
                }
                else{
                    mp2[matches[i][j]]++;
                    }
                }
            }
        
        for(auto it:mp1){
            if(mp2.find(it.first)==mp2.end()){
                        v1.push_back(it.first);
            }
        }
        v.push_back(v1);
        for(auto it:mp2){
            if(it.second==1){
                v2.push_back(it.first);
            }
        }
        v.push_back(v2);

        return v;
    }
};