class Solution {
public:
    int totalFruit(vector<int>& f) {
        int l=0,r=0,m=0;
        map<int,int>mp;
        while(r<f.size()){
            mp[f[r]]++;
            if(mp.size()>2){
                while(mp.size()>2){
                    mp[f[l]]--;
                    if(mp[f[l]]==0){
                        mp.erase(f[l]);
                    }
                    l+=1;
                }
            }
            if(mp.size()<=2){
                m=max(m,r-l+1);
            }
            r+=1;
        }
        return m;
    }
};