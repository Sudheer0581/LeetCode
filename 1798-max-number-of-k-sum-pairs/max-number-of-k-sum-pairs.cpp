class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int l=0,r=nums.size()-1,x,c=0;
        sort(nums.begin(),nums.end());
        while(l<r){
            x=nums[l]+nums[r];
            if(x==k){
                c+=1;
                l+=1;
                r-=1;
            }
            else if(x<k){
                l+=1;
            }
            else{
                r-=1;
            }
        }
        return c;
    }

};