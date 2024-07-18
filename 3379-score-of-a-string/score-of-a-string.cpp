class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0;i<s.size()-1;i++){
            int x=(s[i]-'0')+48;
            int y=(s[i+1]-'0')+48;
            sum+=abs(x-y);
        }
        return sum;
    }
};