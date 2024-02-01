class Solution {
public:
    vector<vector<int>>v1;
    void Fun(int idx,int n,int k,vector<int>&v){
        if(v.size()==k){
            v1.push_back(v);
            return;
        }
        for(int i=idx;i<=n;i++){
            v.push_back(i);
            Fun(i+1,n,k,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        Fun(1,n,k,v);
        return v1;
    }
};