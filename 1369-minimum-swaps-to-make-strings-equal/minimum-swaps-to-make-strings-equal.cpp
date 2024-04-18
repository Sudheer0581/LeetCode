class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int c=0,x=0,y=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]==s2[i]){
                continue;
            }
            if(s1[i]=='x'){
                x+=1;
            }
            else{
                y+=1;
            }
        }
        if((x+y)%2!=0) return -1;
        else return ((x+1)/2+(y+1)/2);
    }
};