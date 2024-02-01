class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
      
        vector<int>vec;
        vector<vector<int>> empty;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());

        if (nums.size() % 3 != 0)
            return empty;

        vec.push_back(nums[0]);
        for(int i=1;i<=nums.size();i++){
            if(vec.size()<3 && nums[i]-vec[0]>k){
                return empty;
            }
            else if(vec.size()<3 && nums[i]-vec[0]<=k){
                vec.push_back(nums[i]);
            }
            else if(vec.size()==3){
                    ans.push_back(vec);
                    vec.clear();
                    vec.push_back(nums[i]);
                }  
            }
        
       // ans.push_back(vec);
        return ans;
    }
};