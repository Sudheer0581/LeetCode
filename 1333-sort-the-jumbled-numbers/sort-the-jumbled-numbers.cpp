class Solution {
public:
    static bool Sort(pair<int,pair<int,int>>p1,pair<int,pair<int,int>>p2){
        if(p1.second.first==p2.second.first){
            return p1.first<p2.first;
        }
        return p1.second.first<p2.second.first;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int, pair<int, int>>> v;
        for(int i=0;i<nums.size();i++){
            int z=0;
            int k=nums[i];
            if(nums[i]==0){
                z=mapping[0];
            }
            else{
                string q = to_string(nums[i]);
                for(char ch:q){
                    int digit = ch - '0';
                    z=z*10+mapping[digit];
                }
            }
            v.push_back({i,{z,k}});
        }
        sort(v.begin(),v.end(),Sort);
        vector<int>vec;
        for(auto it:v){
            vec.push_back(it.second.second);
        }
        return vec;
    }
};