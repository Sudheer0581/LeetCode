class Solution {
public:
    int pivotInteger(int n) {
        double x=sqrt(n*(n+1)/2);
        if(x-ceil(x)==0){
            return int(x);
        }
        else{
            return -1;
        }
    }
};