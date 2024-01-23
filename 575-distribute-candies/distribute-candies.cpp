class Solution {
public:
    int distributeCandies(vector<int>& c) {
        map<int,int>mp;
        for(int i=0;i<c.size();i++){
            mp[c[i]]++;
        }
        int n=c.size()/2;
        int m=0;
        if(mp.size()<n){
            if(n<=mp.size()){
                m=n;
            }
            else{
                m=mp.size();
            }
            return m;
        }
        else{
            return n;
        }
    }
};