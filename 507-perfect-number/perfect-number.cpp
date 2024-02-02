class Solution {
public:
    int Fun(int n){
        int s=0;
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                s+=i;
            }
        }
        return s;
    }
    bool checkPerfectNumber(int num) {
        int x = Fun(num);
        cout<<x;
        if(x==num)return 1;
        return 0;
    }
};