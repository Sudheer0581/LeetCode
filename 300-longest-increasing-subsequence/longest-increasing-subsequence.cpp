class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.empty())return 0;
        vector<int>v(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    v[i]=max(v[i],v[j]+1);
                }
            }
        }
        int x = *max_element(v.begin(),v.end());
        return x;
    }
};

