class Solution {
public:
    bool halvesAreAlike(string s) {
        int c1=0,c2=0;
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                if(i<(s.size()/2)){
                    
                    c1+=1;
                }
                else{
                    c2+=1;
                }
            }
        }
        cout<<c1<<" "<<c2<<endl;
        if(c1==c2)return true;
        return false;
       
    }
};