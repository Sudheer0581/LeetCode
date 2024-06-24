class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int total=0;
        for(int i=0;i<customers.size();i++){
            if(grumpy[i]==0){
                total+=customers[i];
            }
        }
        int x=0;
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1){
                x+=customers[i];
            }
        }
        int m=x;
        for(int i=minutes;i<customers.size();i++){
            if(grumpy[i]==1){
                x+=customers[i];
            }
            if(grumpy[i-minutes]==1){
                x-=customers[i-minutes];
            }
            m=max(x,m);
        }
        return total+m;
    }
};