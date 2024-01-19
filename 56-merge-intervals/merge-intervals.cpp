class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>v;
        int n=intervals.size();
        stack<pair<int,int>>st;
        sort(intervals.begin(),intervals.end());
        st.push({intervals[0][0],intervals[0][1]});
        for(int i=1;i<n;i++){
            int x=intervals[i][0];
            int y=intervals[i][1];
            int stx=st.top().first;
            int sty=st.top().second;
            if(x<=sty){
                st.top().second=max(st.top().second,y);
            }
            else{
                 st.push({x,y});
            }
        }
        while(!st.empty()){
            v.push_back({st.top().first,st.top().second});
            st.pop();
        }
        sort(v.begin(),v.end());
        return v;
    
        
    }
};
