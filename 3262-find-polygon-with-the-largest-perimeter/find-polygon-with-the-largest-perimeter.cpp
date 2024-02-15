class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long prev=0,c=0,f=0,s=0,m=0;
        for(int i=0;i<nums.size();i++){
            prev=s;
            s+=nums[i];
            if(c>=2){
                if(prev>nums[i]){
                    m=max(m,s);
                }
            }
            c+=1;
        }
        if(m==0) return -1;
        return m;
    }
};