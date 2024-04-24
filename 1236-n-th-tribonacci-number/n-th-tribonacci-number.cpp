class Solution {
public:
    int tribonacci(int n) {
        int f=0,s=1,t=1,r;
        if(n<2){
            return n;
        }
        if(n==2){
            return 1;
        }
        for(int i=3;i<=n;i++)
        {
                r=f+s+t;
                f=s;
                s=t;
                t=r;
        }
        return r;
    }
}; 
