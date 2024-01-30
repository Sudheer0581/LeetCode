class Solution {
public:
    vector<vector<int>>v1;
    void subset(int ind,int n,vector<int> &nums,vector<int> &v){
        if(ind==n){
            v1.push_back(v);
            return;
        }
        v.push_back(nums[ind]);
        subset(ind+1,n,nums,v);
        v.pop_back();
        subset(ind+1,n,nums,v);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        subset(0,n,nums,v);
        return v1;
    }
};