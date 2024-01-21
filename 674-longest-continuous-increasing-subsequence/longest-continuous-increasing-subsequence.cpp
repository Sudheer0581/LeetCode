static int fast_io = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int m=1;
        int c=1; 
        for (int i=0; i<nums.size()-1; i++){
            if(nums[i]<nums[i+1]){
                c++;
                m=max(m,c);
            }
            else{
                c=1;    
            }
        }
        return m;
    }
};