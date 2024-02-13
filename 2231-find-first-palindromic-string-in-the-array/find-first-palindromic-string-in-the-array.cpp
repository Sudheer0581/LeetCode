class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto i:words){
            string x=i;
            reverse(i.begin(),i.end());
            if(x==i){
                return i;
            }
        }
        return "";
    }
};