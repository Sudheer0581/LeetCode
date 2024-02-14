class Solution {
public:
    int dp[10001];
    int Fun(int idx,vector<int>&nums){
        if(idx==nums.size()-1){
            return nums[idx];
        }
        if(idx>=nums.size()){
            return 0;
        }
        if(dp[idx]!=-1) return dp[idx];
        int x=nums[idx]+Fun(idx+2,nums);
        int y=Fun(idx+1,nums);
        return dp[idx]=max(x,y);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int>arr1;
        vector<int>arr2;
        for(int i=0;i<nums.size();i++){
            if(i!=0) arr1.push_back(nums[i]);
            if(i!=nums.size()-1) arr2.push_back(nums[i]);
        }
        memset(dp,-1,sizeof(dp));
        int x = Fun(0,arr1);
        memset(dp,-1,sizeof(dp));
        int y= Fun(0,arr2);
        return max(x,y);
    }
};