class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                c+=1;
            }
        }
        if(c>=2){
            return true;
        }
        return false;
    }
};