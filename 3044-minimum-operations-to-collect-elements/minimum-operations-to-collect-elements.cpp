class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x=0;
        set<int>c;
        for(int i=nums.size()-1;i>=0;i--)
        {
            x+=1;
        //    cout<<nums[i]<<" ";
            if(nums[i]<=k){
                c.insert(nums[i]);
                //  cout<<x;
            }
            if(c.size()==k){
                return x;
            }

        }
        return 0;
    }
};