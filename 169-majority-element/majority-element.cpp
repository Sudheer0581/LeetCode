class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int s=nums.size();
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]>(s/2)){
                return nums[i];
            }
        }
        return -1;
    }
};