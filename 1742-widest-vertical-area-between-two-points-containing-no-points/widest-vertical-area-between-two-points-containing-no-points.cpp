class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int n=points.size();
        int m=0;
        for(int i=0;i<n-1;i++){
            int x=abs(points[i][0] - points[i+1][0]);
            m=max(m,x);
        }
        return m;
    }
};