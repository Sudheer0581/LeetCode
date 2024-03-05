class Solution {
public:
    string removeStars(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string x="";
        while(!st.empty()){
            x+=st.top();
            st.pop();
        }
        reverse(x.begin(),x.end());
        return x;
    }
};