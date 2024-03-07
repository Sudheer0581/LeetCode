class Solution {
public:
    int Fun(int n,int b){
        string s="";
        while(n>=1){
            s+=to_string(n%b);
            n/=b;
        }
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return 0;
            }
            i+=1;
            j-=1;
        }
        return 1;
    }
    bool isStrictlyPalindromic(int n) {
        int f=0;
        for(int i=2;i<=n-2;i++){
            if(Fun(n,i)==0){
                f=1;
            }
        }
        if(f==1){
            return 0;
        }
        return 1;
    }
};
