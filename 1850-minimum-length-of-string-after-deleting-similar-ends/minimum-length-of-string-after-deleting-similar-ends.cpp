class Solution {
public:
    int minimumLength(string s) {
        if(s.size()==1){
            return 1;
        }
        else{
            int i=0,j=s.size()-1;
            while(i<j and s[i]==s[j]){
                int z=s[i];
                while(i<=j and s[i]==z){
                    i+=1;
                }
                while(i<=j and s[j]==z){
                    j-=1;
                }
            }
            cout<<i<<" "<<j;
            if(i<=j){
                return j-i+1;
            }
            return 0;
        }
    }
};