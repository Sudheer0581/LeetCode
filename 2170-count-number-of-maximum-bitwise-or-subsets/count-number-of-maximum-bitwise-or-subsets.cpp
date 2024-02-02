class Solution {
public:
    int c=0;
    void Fun(int& m,int idx,vector<int>&nums,int x){
        if(idx>=nums.size()){
            if(x==m){
                c+=1;
            }
            return ;
        }
            // x=x|nums[idx];
            Fun(m,idx+1,nums,x|nums[idx]);
            // x=x|nums[idx];
            Fun(m,idx+1,nums,x);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int m=0;
        int x=0;
        for(int i=0;i<nums.size();i++){
            m=m|nums[i];
        }
        Fun(m,0,nums,x);
        return c;
    }
};