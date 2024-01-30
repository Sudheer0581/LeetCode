class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<string>s;
        if(t.size()==1){
            return stoi(t[0]);
        }
        else{
        s.push(t[0]);
        s.push(t[1]);
        string x,z;
        for(int i=2;i<t.size();i++){
            if(s.size()>=2 and t[i]=="+" or t[i]=="-" or t[i]=="*" or t[i]=="/"){
            x=s.top();
            s.pop();
             z=s.top();
            s.pop();
            }
            if(t[i]== "+" ){
                string k = to_string(stoi(x)+stoi(z));
                s.push(k);
            }
            else if(t[i]=="-"){
                string k = to_string(stoi(z)-stoi(x));
                s.push(k);
            }
            else if(t[i]=="*"){
                string k = to_string(stoi(x)*stoi(z));
                s.push(k);
            }
            else if(t[i]=="/"){
                string k = to_string(stoi(z)/stoi(x));
                s.push(k);
            }
            else{
                s.push(t[i]);
            }
        }
        string v=s.top();
        return stoi(v);
    }
    }
};