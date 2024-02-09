class Solution {
public:
    int c=0;
    void Fun(int i,vector<int>&nums,int t,int s){
        if(i==nums.size()){
            if(s==t){
                c+=1;
            }
            return;
        }

        Fun(i+1,nums,t,s+nums[i]);
        Fun(i+1,nums,t,s-nums[i]);
        
    }
    int findTargetSumWays(vector<int>& nums, int t) {
        Fun(0,nums,t,0);
        return c;
    }
};