class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int x =pow(2,n)-1;
        vector<vector<int>>v;
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
            v.push_back(v1);
            v1.clear();
        }
        return v;
        
    }
};
