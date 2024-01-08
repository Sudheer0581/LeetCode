class Solution {
public:
    bool hasAlternatingBits(int n) {
        int f=0;
        int t=log2(n)+1;
        cout<<t;
        for(int i=0;i<t;i++)
        {
            int x=n&(1<<i);
            int z=n&(1<<(i+1));
            if((x>0 and z>0) or (x==0 and z==0)){
                f=1;
            }
        }
        if(f==0)return true;
        return false;
    }
};