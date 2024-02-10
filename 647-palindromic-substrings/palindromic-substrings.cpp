class Solution {
public:
    bool pal(string s){
        if(s.size()==0){
            return 0;
        }
        string x=s;
        reverse(s.begin(),s.end());
        if(s==x)return 1;
        return 0;
    }
    int c=0;
    void Fun(int idx,string s){
        if(idx==s.size()){          
            return;
        }
        string x;
        for(int i=idx;i<s.size();i++){
            x+=s[i];
            if(pal(x)){
                c+=1;
            }
        }
        Fun(idx+1,s);
    }
    int countSubstrings(string s) {
        Fun(0,s);
        return c;
    }
};