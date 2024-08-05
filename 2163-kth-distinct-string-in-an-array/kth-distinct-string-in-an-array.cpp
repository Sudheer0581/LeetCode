class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto it:arr){
            if(mp[it]==1){
                k-=1;
                if(k==0) return it;
            }
        }
        return "";
    }
};