class Solution {
public:
    int hammingDistance(int x, int y) {
        int c=0;
        while(x||y){
            if((x&1)^(y&1)){
                c+=1;
            }
            x>>=1;
            y>>=1;
        }
        return c;
    }
};