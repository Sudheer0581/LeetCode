class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int num:nums){
            total+=num;
        }
        if(total==0||total==n) return 0;
        int current=0;
        for(int i=0;i<total;i++){
            current+=nums[i];
        }
        int m=current;
        for(int i=0;i<n;i++){
            current-=nums[i];
            current+=nums[(i+total)%n];
            m=max(m,current);
        }
        return total-m;
    }
};