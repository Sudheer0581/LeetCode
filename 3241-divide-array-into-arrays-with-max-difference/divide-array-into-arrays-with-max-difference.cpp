class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>v1;
        vector<int>v;
        sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i]<<" ";
        // }
        int c=0,f=0;
        int i=0,j=1;
        while(j<nums.size()){
            if(abs(nums[i]-nums[j])<=k and c<=2){
                v.push_back(nums[j]);
                c+=1;
                j+=1;
                if(c==2){
                    v.push_back(nums[i]);
                    v1.push_back(v);
                    v.clear();
                    i=j;
                    j+=1;
                    c=0;
                }
                
            }
            else{
                f=1;
                break;
            }
        }
        if(f==0){
            return v1;
        }
        else{
            v1.clear();
            return v1;
        }
    }
};