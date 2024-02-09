class Solution {
public:
    string s[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>v;
    void Fun(string digits,int idx,string s1){
        if(idx==digits.size()){
            v.push_back(s1);
            return;
        }
        int x = digits[idx]-'0';
        // cout<<x<<" ";
        string z = s[x];
        for(int i=0;i<z.size();i++){
            s1+=z[i];
            Fun(digits,idx+1,s1);
            s1.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        string s1;
        if(digits.size()==0){
            return v;
        }
        Fun(digits,0,s1);
        return v;
        
    }
};