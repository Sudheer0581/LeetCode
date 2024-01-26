class Solution {
public:
    set<vector<int>>v1;
    void Perm(vector<int>&s,vector<int>&f,vector<int>&ans){
        if(ans.size()==s.size()){
            v1.insert(ans);
            return;
        }
        for(int i=0;i<s.size();i++){
            if(f[i]==0){
                ans.push_back(s[i]);
                f[i]=1;
                Perm(s,f,ans);
                f[i]=0;
                ans.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>x;
        vector<int>v(nums.size(),0);
        vector<int>v2;
        Perm(nums,v,v2);
        for(auto it:v1){
            x.push_back(it);
        }
        return x;
    }
};