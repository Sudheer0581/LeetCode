class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isMonotonic=0;
        int f=0;

        for(int i=1;i<nums.size();i++){    
            if(nums[i]<nums[i-1]){      
                f=1;
                break;
            }
        }

        if(f==0)
        return 1;

        f=0;

        for(int i=1;i<nums.size();i++){   
            if(nums[i]>nums[i-1]){        
                f=1;
                return 0;
            }
        }

        return 1;

    }
};