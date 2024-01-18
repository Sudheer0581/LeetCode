class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        st.push(s[0]);
         for(int i=1;i<s.size();i++){
             if(st.empty()){
                st.push(s[i]);
            }
             else{
                if(st.top()==s[i]){
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