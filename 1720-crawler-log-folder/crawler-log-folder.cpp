class Solution {
public:
    int minOperations(vector<string>& logs) {
        int x=0;
        for(int i=0;i<logs.size();i++){
            if(logs[i]=="./"){
                continue;
            }
            else if(logs[i]=="../"){
                if(x>0) x-=1;
            }
            else{
                x+=1;
            }
        }
        // if(x<0) return 0;
        return x;
    }
};