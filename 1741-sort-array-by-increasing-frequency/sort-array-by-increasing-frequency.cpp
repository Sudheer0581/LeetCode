class Solution {
public:
    static bool Sort(pair<int,int>v1,pair<int,int>v2){
        if (v1.first == v2.first) {
            return v1.second>v2.second;
        }
        return v1.first<v2.first;
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
    vector<pair<int,int>>v;
    for(auto it:mp){
        v.push_back({it.second,it.first});
    }
    sort(v.begin(),v.end(),Sort);
    vector<int>vec;
    for(auto it:v){
        for(int i=0;i<it.first;i++){
            vec.push_back(it.second);
        }
    }
    return vec;
    }
};