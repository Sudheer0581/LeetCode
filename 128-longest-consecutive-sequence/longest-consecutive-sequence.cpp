class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=0;
        int m=0;
        if(nums.size()==0)return 0;
        for(int i=0;i<nums.size()-1;i++){
            cout<<nums[i]<<" ";
            if(nums[i+1]-nums[i]==1){
                c+=1;
            }
            else if(nums[i+1]==nums[i]){
                continue;
            }
            else{
                m=max(m,c);
                c=0;
            }
        }
        m=max(m,c);
        return m+1;
    }
};