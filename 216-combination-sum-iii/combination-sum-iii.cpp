class Solution {
public:
    vector<vector<int>>v1;
    void Fun(int idx,int k,int n,vector<int>v){
        if(v.size()==k){
            if(n==0){
                v1.push_back(v);
                return;
            }
        }
        if(v.size()>k or n<0){
            return;
        }
        for(int i=idx;i<=9;i++){
            v.push_back(i);
            Fun(i+1,k,n-i,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
        Fun(1,k,n,v);
        return v1;
    }
};