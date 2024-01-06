class Solution {
public:
    int findComplement(int num) {
        unsigned x = ~0;
        int z=num^x;
        int y=log2(num)+1;
        int t=x<<y;
        return z^t;
    }
};
