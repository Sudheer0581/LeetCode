class Solution {
public:
    string removeStars(string s) {
        reverse(s.begin(),s.end());
        stack<int>st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        string x;
        while(!st.empty()){
            int z=st.top();
            if(z=='*'){
                x.pop_back();
                st.pop();
            }
            else{
                x+=z;
                st.pop();
            }

        }
        return x;
    }
};