class Solution {
public:
    int maxCoins(vector<int>& p) {
        sort(p.begin(),p.end());
        int s=0,c=0;
        for(int i=p.size()-2;i>=0;i-=2){
            cout<<p[i]<<" ";
            if(c<p.size()/3){
                s+=p[i];
                c+=1;
            }
            else{
                break;
            }

        }
        return s;
    }

};