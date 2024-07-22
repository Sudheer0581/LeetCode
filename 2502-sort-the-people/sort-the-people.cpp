class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>v;
        for(int i=0;i<names.size();i++){
            v.push_back({heights[i],names[i]});
        }
        sort(v.rbegin(),v.rend());
        vector<string>v1;
        for(auto it:v){
            v1.push_back(it.second);
        }
        return v1;
    }
};