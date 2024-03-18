class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int x=points[0][1];
        int c=1;
        for(int i=1;i<points.size();i++){
            if(points[i][0]>x){
                c+=1;
                x=points[i][1];
            }
            else{
                x=min(x,points[i][1]);
            }
        }
        return c;
    }
};