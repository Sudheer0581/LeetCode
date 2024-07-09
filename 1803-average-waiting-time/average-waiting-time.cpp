class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int s=customers[0][0]+customers[0][1];
        double x=customers[0][1];
        for(int i=1;i<customers.size();i++){
            // cout<<customers[i][1]<<" ";
            if(customers[i][0]<=s){
                s+=customers[i][1];
                x+=s-customers[i][0];
                cout<<x<<" ";
            }
            else{
                x+=customers[i][1];
                s=customers[i][0]+customers[i][1];
            }
        }
        return x/customers.size();
    }
};