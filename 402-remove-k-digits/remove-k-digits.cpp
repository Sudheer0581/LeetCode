class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int>st;
        st.push(num[0]);
        for(int i=1;i<num.size();i++){
            while(!st.empty() and k>0 and st.top()>num[i]){
                    st.pop();
                    k-=1;
            }
            st.push(num[i]);
        }
        while(!st.empty() and k>0){
            st.pop();
            k-=1;
        }
        string x="";
        while(!st.empty()){
            x+=st.top();
            st.pop();
        }
        reverse(x.begin(),x.end());
        int z=0;
        while(z<x.size() and x[z]=='0'){
            z+=1;
        }
        x=x.substr(z);
        if(x==""){
            return "0";
        }
        else{
            return x;
        }
    }
};