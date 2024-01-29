// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int n=gas.size();
//         int g=0,c=0;
//         int cg=0,s=0;
//         for(int i=0;i<n;i++){
//             g+=gas[i];
//             c+=cost[i];
//             cg=gas[i]-cost[i];
//             if(cg<0){
//                 s=i+1;
//                 cg=0;
//             }
//         }
//         if(g<c){
//             return -1;
//         }
//         return s;
//     }
// };
      
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int total_gas=0,total_cost=0;
        int curr_gas=0, starting_point=0;
        for(int i=0;i<n;i++)
        {
            //these two variable are to check if no case is possible
            total_gas+=gas[i];
            total_cost+=cost[i];
            //for checking the total present gas at index i
            curr_gas+=gas[i]-cost[i];
            if(curr_gas<0)
            {
               //there is a breakdown....so we will start from next point or index
                starting_point=i+1;
                //reset our fuel 
                curr_gas=0;
            }
        }
        if(total_gas<total_cost){
            return -1;
        }    
        else{
            return starting_point;
        }
    }
};