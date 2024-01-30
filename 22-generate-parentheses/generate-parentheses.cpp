class Solution {
public:
    vector<string>v;
    void par(int n,int op,int cl,string &s){
        if(op==n and cl==n){
            v.push_back(s);
            return;
        }
        if(op<n){
            s.push_back('(');
            par(n,op+1,cl,s);
            s.pop_back();
        }
        if(op>cl){
            s.push_back(')');
            par(n,op,cl+1,s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        int op=0;
        int cl=0;
        string s;
        par(n,op,cl,s);
        return v;
    }
};