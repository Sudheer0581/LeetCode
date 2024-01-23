class Solution {
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<pair<int,int>>v;
        vector<int>v1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
                v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<k;i++){
            v1.push_back(v[i].first);
        }
        return v1;
    }
};