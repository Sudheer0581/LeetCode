class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.empty())return 0;
        int c=1;
        int m=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                c+=1;
            }
            else{
                m=max(c,m);
                c=1;
            }
        }
        m=max(c,m);
        return m;
    }
};