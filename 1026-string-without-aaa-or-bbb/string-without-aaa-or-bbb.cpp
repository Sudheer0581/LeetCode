class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string s="";
        while(a>=1 and b>=1){
            if(a-b>=1){
                s=s+"aab";
                a-=2;
                b-=1;
            }
            else if(a==b){
                s=s+"ab";
                a-=1;
                b-=1;
            }
            else{
                s=s+"bba";
                b-=2;
                a-=1;
            }
        }
        if(a==2) s+="aa";
        else if(a==1) s+="a";
        if(b==2) s+="bb";
        else if(b==1) s+="b";
        return s;
    }
};
