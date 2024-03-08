class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>v(101,0);
        int k=0,x=0;
        for(auto it:nums){
            v[it]++;
            if(v[it]>k){
                k=v[it];
                x=v[it];
            }
            else if(v[it]==k){
                x+=v[it];
            }
        }
        return x;
    }
};
