class Solution {
public:
    string x;
    void Fun(string s,vector<string>&nums,int n){
        if(s.size()==n){
            if(find(nums.begin(),nums.end(),s)==nums.end()){
                x=s;
            }
            return;
        }
        Fun(s+'0',nums,n);
        Fun(s+'1',nums,n);
       
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].size();
        string s="";
        Fun(s,nums,n);
        return x;
    }
};