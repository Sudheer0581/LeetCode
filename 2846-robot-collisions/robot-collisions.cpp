class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<pair<int, pair<int, char>>> t;
        for(int i=0;i<positions.size();i++){
            t.push_back({positions[i],{healths[i], directions[i]}});
        }
        sort(t.begin(),t.end());
        stack<pair<int, pair<int, char>>>st;
        for(auto it:t){
            int pos=it.first;
            int health=it.second.first;
            int dir=it.second.second;
            int f=0;
            while(!st.empty() and st.top().second.second=='R' and dir=='L'){
                if(st.top().second.first>health){
                    st.top().second.first-=1;
                    health=0;
                    break;
                }
                else if(st.top().second.first<health){
                    st.pop();
                    health-=1;
                }
                else{
                    st.pop();
                    health=0;
                    break;
                    }
                }
                if(health>0){
                    st.push({pos,{health,dir}});
                }
            }
            vector<int>ans;
            map<int,int>mp;
            while(!st.empty()){
                mp[st.top().first]=st.top().second.first;
                st.pop();
            }
            for(int i=0;i<positions.size();i++){
                if(mp[positions[i]]){
                    ans.push_back(mp[positions[i]]);
                }
            }  
            return ans;
    }
};