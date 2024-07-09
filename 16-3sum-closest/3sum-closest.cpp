class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int m=INT_MAX;
        int s;
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int x = nums[i]+nums[j]+nums[k];
                if(abs(x-target)<m){
                    m=abs(x-target);
                    s=x;
                }
                else if(abs(x-target)==m){
                    s=max(s,x);
                }
                if(x>target){
                    k-=1;
                }
                else{
                    j+=1;
                }
            }
        }
        return s;
    }
};