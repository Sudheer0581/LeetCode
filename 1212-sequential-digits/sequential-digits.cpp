class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>v;
        string s="123456789";
        for(int i=0;i<s.size();i++){
            string x=" ";
            for(int j=i;j<s.size();j++){
                x+=s[j];
                int n=stoi(x);
                if(low<=n and n<=high){
                    v.push_back(n);
                }
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};
