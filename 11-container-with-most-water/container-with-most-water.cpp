class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int ma=0;
        while(i<j){
            int m=min(height[i],height[j]);
            int d = j-i;
            if(ma<(m*d)){
                ma=(m*d);
            }
            if(m==height[i]){
                i+=1;
            }
            else{
                j-=1;
            }
        }
        return ma;
    }
};