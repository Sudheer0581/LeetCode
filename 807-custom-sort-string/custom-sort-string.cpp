class Solution {
public:
    string customSortString(string s1, string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        string x;
        for(int i=0;i<s1.size();i++){
            while(mp.find(s1[i])!=mp.end()){
                x.append(mp[s1[i]],s1[i]);
                mp.erase(s1[i]);
            }
        }
        for(auto it:mp){
            x.append(it.second,it.first);
        }
        return x;
    }
};