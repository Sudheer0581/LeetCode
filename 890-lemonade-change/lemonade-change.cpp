class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0;
        int t=0,tw=0;
        if(bills[0]!=5) return 0;
        else f=1;
        for(int i=1;i<bills.size();i++){
            if(bills[i]==5){
                f+=1;
            }
            else if(bills[i]==10){
                if(f>0){
                    t+=1;
                    f-=1;
                }
                else{
                    return 0;
                }
            }
            else{
                if(f>0 and t>0){
                    tw+=1;
                    f-=1;
                    t-=1;
                }
                else if(f>2){
                    tw+=1;
                    f-=3;
                }
                else{
                    return 0;
                }
            }
        }
        return 1;
    }
};
