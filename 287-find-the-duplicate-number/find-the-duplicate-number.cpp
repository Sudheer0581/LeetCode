class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int arr[10000001]={0};
        for(auto it:nums){
            // cout<<it<<" ";
            arr[it]++;
            if(arr[it]>1) return it;
        }
        return 0;
    }
};