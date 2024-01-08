class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(),nums.end());
        int x=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]){
                x=nums[i];
                break;
            }
        }
        v.push_back(x);
        int s=nums.size();
        int z=(s*(s+1))/2;
        int a=accumulate(nums.begin(),nums.end(),0)-x;
        v.push_back(z-a);
        return v;

    }
};