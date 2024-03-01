class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                c+=1;
            }
        }
        string x;
        if(c==1){
            for(int i=0;i<s.size()-1;i++){
                x+='0';
            }
            x+='1';
        }
        else{
            c=c-1;
            int i=0;
            while(c--){
                x+='1';
                i+=1;
            }                                      
            while(i<s.size()-1){
                i+=1;
                x+='0';
            }
            x+='1';
        }
        return x;
    }
};