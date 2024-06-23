class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>v;
        int i=0,j=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(i<j){
            double x=(nums[i]+nums[j])/(2*1.0);
            cout<<x<<" ";
            v.push_back(x);;
            i+=1;
            j-=1;
        }
        sort(v.begin(),v.end());
        return v[0];
    }
};