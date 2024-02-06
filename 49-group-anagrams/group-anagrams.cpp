class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        map<string,pair<int,vector<string>>>mp;
        for(int i=0;i<strs.size();i++){
            string x=strs[i];
            sort(x.begin(),x.end());
            mp[x].first++;
            mp[x].second.push_back(strs[i]);
        }
        for(auto it:mp){
            v.push_back(it.second.second);
        }
        return v;
    }
};