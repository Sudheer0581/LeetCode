class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        if(n==1 and t.size()==0) return 1;
        int s=0;
        map<int,int>mp;
        map<int,int>mp1;
        for(int i=0;i<t.size();i++){
            mp[t[i][0]]++;
            mp1[t[i][1]]++;
        }
        int m=0,k=0;
        for(auto it:mp1){
            if(it.second>m){
                m=it.second;
                k=it.first;
            }
        }
        if(mp.size()==n-1 and mp.size()==m and mp.find(k)==mp.end()){
            return k;
        }
        return -1;
    }
};