class Solution {
public:
    vector<vector<int>>v1;
    void Fun(int idx,int x,int tar,vector<int>&can,vector<int>&v){
        if(x==tar){
            v1.push_back(v);
            return;
        }
        for(int i=idx;i<can.size();i++){
            if(i>idx and can[i]==can[i-1])continue;
            if(x>tar)break;
            v.push_back(can[i]);
            Fun(i+1,x+can[i],tar,can,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& can, int tar) {
        sort(can.begin(),can.end());
        vector<int>v;
        int x=0;
        Fun(0,x,tar,can,v);
        return v1;
    }
};