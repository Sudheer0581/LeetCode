class Solution {
public:
    int minimumLength(string s) {
            int i=0,j=s.size()-1;
            while(i<j and s[i]==s[j]){
                int z=s[i];
                while(i<=j and s[i]==z){
                    i+=1;
                }
                while(j>=i and s[j]==z){
                    j-=1;
                }
            }
            return j-i+1;
        }
};