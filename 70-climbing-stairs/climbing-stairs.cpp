class Solution {
public:
     //int fib(int n){
    //     if(n<=1)return n;
    //     return fib(n-1)+fib(n-2);
    // }
     int climbStairs(int n) {
    if(n==1)return 1;
    if(n==2)return 2;
    int a=0,b=1,c;
    for(int i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
    }
};