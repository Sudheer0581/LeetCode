class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int s=0,j=0,x=0;
        vector<pair<int,int>>temp;
        for(int i=0;i<worker.size();i++){
            temp.push_back({difficulty[i],profit[i]});
        }
        sort(temp.begin(),temp.end());
        sort(worker.begin(),worker.end());
        for(int i=0;i<worker.size();i++){
            while(worker[i]>=temp[j].first and j<worker.size()){
                x=max(x,temp[j++].second);
            }
            s+=x;
        }
        return s;
    }
};

