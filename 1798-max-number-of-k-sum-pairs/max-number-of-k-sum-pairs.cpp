class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int>mp;
        int c=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=k){
                if(mp.find(k-nums[i])!=mp.end()){
                    if(nums[i]==k-nums[i]){
                        if(mp[nums[i]]>1){
                            c+=1;
                            mp[nums[i]]--;
                            mp[k-nums[i]]--;
                        }
                    }
                    else{
                        if(mp[nums[i]]>0 and mp[k-nums[i]]>0)
                        c+=1;
                        mp[nums[i]]--;
                        mp[k-nums[i]]--;
                    }
                    
                }
            }
        }
        for(auto it:mp){
            cout<<it.first<<" "<<it.second<<endl;
        }
        return c;
    }
};