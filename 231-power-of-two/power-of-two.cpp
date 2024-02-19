class Solution {
    int bits(int n)
    {
        int c=0;
        while(n!=0){
            if(n%2){
                c+=1;
            }
            n>>=1;
        }
        return c;
    }
public:
    bool isPowerOfTwo(int n) {
        if(n<0){
            return false;
        }
        else if((bits(n)!=1))
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};