class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;
        int m=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                c+=1;
            }
            else if(s[i]==')'){
                m=max(m,c);
                c-=1;
            }
        }
        return m;
    }
};