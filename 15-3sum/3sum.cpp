class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l,r;
        vector<vector<int>>v1;
        vector<int>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            l=i+1;
            r=nums.size()-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0){
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    l+=1;
                    r-=1;
                    // for(int i=0;i<v1.size();i++){
                    //     auto it = std::find(v1.begin(), v1.end(),v);
                    //     if(it==v1.end()){
                    //         v1.push_back(v);
                    //     }
                    // }
                     v1.push_back(v);
                    v.clear();
                }
                else if(nums[i]+nums[l]+nums[r]<0){
                    l+=1;
                }
                else{
                    r-=1;
                }
            }
        }
        map<vector<int>,int>mp;
        for(int i=0;i<v1.size();i++){
            mp[v1[i]]++;
        }
        v1.clear();
        for(auto it:mp){
            v1.push_back(it.first);
        }
        return v1;
    }
};