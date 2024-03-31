class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0,j=0,s=1,c=0;
        if(k==0) return 0;
        while(j<nums.size()){
            s*=nums[j];
            j+=1;
            while(i<j and s>=k){
                s/=nums[i];
                i++;
            }
            c+=j-i;
            // j+=1;
        }
        return c;
    }
};