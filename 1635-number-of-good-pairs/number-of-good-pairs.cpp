class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp){
            int x=it.second;
            if(x>1){
                c+=(x*(x-1))/2;
            }
        }
        return c;
    }
};