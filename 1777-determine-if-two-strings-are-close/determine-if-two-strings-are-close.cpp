class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>v1;
        vector<int>v2;
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<word1.size();i++){
            mp1[word1[i]]++;
        }
        for(int i=0;i<word2.size();i++){
            if(mp1.find(word2[i])!=mp1.end()){
                mp2[word2[i]]++;
            }
            else{
                return 0;
            }
        }
        for(auto it:mp1){
            v1.push_back(it.second);
        }
        for(auto it:mp2){
            v2.push_back(it.second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1==v2)return 1;
        return 0;

    }
};