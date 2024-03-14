class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int s=0,c=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            int x=s-goal;
            c+=mp[x];
            mp[s]++;
        }
        return c;
    }
};