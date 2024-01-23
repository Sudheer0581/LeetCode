class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            pq.push({score[i],i});
        }
        vector<string>v(n);
        for(int i=0;i<n;i++){
            auto it=pq.top();
            int x=it.first;
            int y=it.second;
            pq.pop();
            if(i==0){
                v[y]= "Gold Medal";
            }
            else if(i==1){
                v[y]="Silver Medal";
            }
            else if(i==2){
                v[y]="Bronze Medal";
            }
            else{
                v[y]=to_string(i+1);
            }
        }
        return v;

    }
};
