class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int>pq;
        int s=0;
        for(int i=0;i<h.size()-1;i++){
            if(h[i]<h[i+1]){
                int x = h[i+1]-h[i];
                pq.push(x);
                s+=x;
                if(s>b){
                    if(l==0){
                        return i;
                    }
                    else{
                        l=l-1;
                        s-=pq.top();
                        pq.pop();
                    }
                }
            }

        }
        return h.size()-1;
    }
};