class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        sort(tokens.begin(),tokens.end());
        int i=0,j=n-1,c=0,m=0;
        while(i<=j){
            if(tokens[i]<=power){
                power-=tokens[i];
                c+=1;
                m=max(c,m);
                i+=1;
            }
            else if(c>0){
                    power+=tokens[j];
                    c-=1;
                    j-=1;
                }
            else{
                    break;
                }
        }
        return m;
    }
};