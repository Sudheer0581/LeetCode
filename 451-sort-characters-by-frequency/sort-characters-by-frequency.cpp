class Solution {
public:
    
    static bool cmp(pair<char,int>p1,pair<char,int>p2){
        if(p1.second==p2.second){
            return p1.first<p2.first;
        }
        return p1.second>p2.second;
    }
    string frequencySort(string s) {
        map<char,int>mp;
        vector<pair<char,int> > v;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),cmp);
        string s1;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].second;j++){
                s1+=v[i].first;
            }
        }
        return s1;

    }
};