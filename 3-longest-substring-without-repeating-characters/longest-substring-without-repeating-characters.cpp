class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int x=-1;
        int m=0;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                x=max(x,mp[s[i]]);
            }
            mp[s[i]]=i;
            m=max(m,i-x);
        }
        return m;
    }
};