class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int c=0;
        for(int i=0;i<nums.size();i++){
            map<int,int>mp;
            for(int j=i;j<nums.size();j++){
                mp[nums[j]]++;
                if(mp.size()==s.size()){
                    c+=1;
                }
            }
        }
        return c;
    }
};