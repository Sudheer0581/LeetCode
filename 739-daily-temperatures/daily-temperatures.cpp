class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>s;
        vector<int>v;
        int n=t.size();
        for(int i=n-1;i>=0;i--){
            while(!s.empty() and t[i]>=t[s.top()]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(0);
            }
            else{
                v.push_back((s.top())-i);
            }
            s.push(i);
        }
            reverse(v.begin(),v.end());
            return v;
        }
       
};