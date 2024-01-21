class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size()/3;
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>n){
                v.push_back(it.first);
            }
        }
        return v;
    }
};