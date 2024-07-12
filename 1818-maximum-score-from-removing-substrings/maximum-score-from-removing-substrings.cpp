class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int res=0;
        string s1,s2;
        int score1,score2;
        if(y>x){
            s1="ba";
            score1=y;
            s2="ab";
            score2=x;
        }
        else{
            s1="ab";
            score1=x;
            s2="ba";
            score2=y;
        }
        vector<char>v1;
        for(int i=0;i<s.size();i++){
            if(s[i]==s1[1] and !v1.empty() and v1.back()==s1[0]){
                res+=score1;
                v1.pop_back();
            }
            else{
                v1.push_back(s[i]);
            }
        }
        cout<<res;
        vector<char>v2;
        for(int i=0;i<v1.size();i++){
            if(v1[i]==s2[1] and !v2.empty() and v2.back()==s2[0]){
                res+=score2;
                v2.pop_back();
            }
            else{
                v2.push_back(v1[i]);
            }
        }
        return res;
    }
};