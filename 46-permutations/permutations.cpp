class Solution {
public:
    vector<vector<int>>v1;
    void Fun(vector<int>&nums,vector<int>&v,vector<int>freq){
        if(v.size()==nums.size()){
            v1.push_back(v);
            // v.clear();
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[i]==0){
                freq[i]=1;
                v.push_back(nums[i]);
                Fun(nums,v,freq);
                freq[i]=0;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>v;
        vector<int>freq(nums.size(),0);
        Fun(nums,v,freq);
        return v1;
    }
};