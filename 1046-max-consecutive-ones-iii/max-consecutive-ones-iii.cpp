class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,z=0,m=0;
        while(r<nums.size()){
            if(nums[r]==0){
                z+=1;
            }
            while(z>k){
                if(nums[l]==0){
                    z-=1;
                }
                l+=1;
            }
            if(z<=k){
                m=max(m,r-l+1);
                r+=1;
            }
            
        }
        return m;
    }
};