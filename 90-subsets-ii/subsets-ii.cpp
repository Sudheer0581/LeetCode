class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        int x =pow(2,n)-1;
        vector<vector<int>>v;
        map<vector<int>,int>mp;
        vector<int>v1;
        for(int i=0;i<=x;i++)
        {
            int pos=0;
            int z=i;
            while(z){
                if(z&1){
                    v1.push_back(nums[pos]);
                }
                pos+=1;
                z>>=1;
            }
            sort(v1.begin(),v1.end());
            mp[v1]++;
            v1.clear();
        }
        for(auto it:mp){
            v.push_back(it.first);
        }
        return v;
    }
};