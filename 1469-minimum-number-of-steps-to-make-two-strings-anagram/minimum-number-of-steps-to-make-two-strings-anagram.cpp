class Solution {
public:
    int minSteps(string s, string t) {
        map<int,int>mp1;
        map<int,int>mp2;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            mp2[t[i]]++;
        }
        for(auto it:mp2){
            if(mp1.find(it.first)==mp1.end()){
                c+=it.second;
            }
            else{
                if(mp1[it.first]<it.second){
                    c+=it.second-mp1[it.first];
                }
            }
        }
        return c;
        
    }
};