class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int c = count(nums.begin(),nums.end(),0);
        vector<int>v;
        int f=0;
        if(c>1){
             v.resize(nums.size(),0);
             return v;
        }
        if(c==1){
            f=1;
        }
        int s=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) 
            {
                s*=nums[i];
            }
        }
        // cout<<s;
        for(int i=0;i<nums.size();i++){
            if(f==0){
                v.push_back(s/nums[i]);
            }
            if(f==1){
                if(nums[i]==0){
                    v.push_back(s);
                }
                else{
                    v.push_back(0);
                }
            }
        }
        return v;
    }
};