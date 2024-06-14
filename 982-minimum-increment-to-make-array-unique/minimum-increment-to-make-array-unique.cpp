class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=nums[0];
        int c=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=m){
                c+=m-nums[i]+1;
                m+=1;
            }
            else{
                m=nums[i];
            }
        }
        return c;
    }
};