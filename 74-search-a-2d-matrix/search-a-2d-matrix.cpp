class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int t=0,c=0;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]==target){
                return true;
            }
            else if(matrix[i][0]>target){
                // cout<<"hi";
                if(i==0){
                    t=0;
                }
                else{
                    t=i-1;
                }
                c=1;
                break;
            }
        }
        if(c==0){
            t=matrix.size()-1;
        }
        cout<<t;
        for(int j=0;j<matrix[0].size();j++){
            //   cout<<matrix[t][j]<<" ";
            if(matrix[t][j]==target){
                return true;
            }
        }
        return false;
        // BINARY SEARCH
        // int m = matrix.size();
        // int n = matrix[0].size();
        
        // int left = 0;
        // int right = m * n - 1;
        
        // while (left <= right) {
        //     int mid = left + (right - left) / 2;
        //     int row = mid / n;
        //     int col = mid % n;
            
        //     if (matrix[row][col] == target) {
        //         return true;
        //     } else if (matrix[row][col] < target) {
        //         left = mid + 1;
        //     } else {
        //         right = mid - 1;
        //     }
        // }
        
        // return false;
    }
};
