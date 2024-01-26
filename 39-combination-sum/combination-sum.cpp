class Solution {
public:
    vector<vector<int>>v1;
    void Combination(int idx, vector<int>&arr,int k,int n,vector<int>v){
        if(idx==n){
            if(k==0){
               v1.push_back(v);
               v.clear();
            }
            return;
        }
        if(arr[idx]<=k){
            v.push_back(arr[idx]);
            k=k-arr[idx];
            Combination(idx,arr,k,n,v);
            k=k+arr[idx];
            v.pop_back();
        }
        Combination(idx+1,arr,k,n,v);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        int n=candidates.size();
        Combination(0,candidates,target,n,v);
        return v1;
        
    }
};