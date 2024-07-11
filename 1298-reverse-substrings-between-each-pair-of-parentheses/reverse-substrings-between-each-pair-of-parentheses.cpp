class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        string t;
        for(int i=0;i<s.size();i++){
            t.clear();
            if(s[i]==')'){
                while(!st.empty() && st.top() != '(') {
                    t += st.top();
                    st.pop();
                }
                if(!st.empty() && st.top() == '(') {
                    st.pop();
                }
                for(char it:t){
                    st.push(it);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        t.clear();
        while(!st.empty()){
            t=st.top()+t;
            st.pop();
        }
        return t;
    }
};