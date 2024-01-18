class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        st.push(s[0]);
         for(int i=1;i<s.size();i++){
             if(st.empty()){
                st.push(s[i]);
            }
             else{
                if(abs((st.top()-'0')-(s[i]-'0'))==32){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
             } 
        }
        string z;
        while(!st.empty()){
            char x=st.top();
            z=x+z;
            st.pop();
        }
        return z;
    }
};