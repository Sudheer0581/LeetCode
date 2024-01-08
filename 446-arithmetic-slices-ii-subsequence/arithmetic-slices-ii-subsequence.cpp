class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<unordered_map<int,int>>mp(nums.size());
        int c=0;
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                long long int a=(nums[i]*1LL)-(nums[j]*1LL);
                if(a<=INT_MIN || a>=INT_MAX){
                    continue;
                }
                mp[i][a]++;
                if(mp[j].count(a)){
                    c+=mp[j][a];
                    mp[i][a]+=mp[j][a];
                }

            }
        }
        return c;
    }
};