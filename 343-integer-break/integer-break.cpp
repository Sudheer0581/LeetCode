class Solution {
public:
    int integerBreak(int n) {
        int x = n%3;
        int z = n/3;
        long long t;
        long long v;
        if(n==3)return 2;
        if(x==0 or n<3){
            long long t = pow(3,z);
            return t;
        }
        else if(x==1){
            long long t = pow(3,z-1);
            // cout<<t;
            long long v = t*(x+3);
            return v;
        }
        else{
            long long t = pow(3,z);
            // cout<<t<<" ";
            long long v =x*t;
            return v;
        }
    }
};