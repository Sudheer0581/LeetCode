class Solution {
public:
    int c=0;
    int numberOfSteps(int num) {
        if(num==0)return c;
        if(num%2==0)
        {
            c+=1;
            return numberOfSteps(num/2);
        }
        if(num%2!=0)
        {
            c+=1;
            return numberOfSteps(num-1);
        }
        return c;
    }
};