class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open=0;
        string x;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }
            else if(s[i]==')'){
                if(open==0){
                    continue;
                }
                open--;
            }
            x+=s[i];
        }
        string z;
        for(int i=x.size()-1;i>=0;i--){
            if(x[i]=='('){
                if(open>0){
                    open--;
                    continue;
                }
            }
            z+=x[i];

        }
        reverse(z.begin(),z.end());
        return z;

    }
};