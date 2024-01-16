class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        vector<int>v;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                v.push_back(i+1);
                v.push_back(j+1);
                i+=1;
                j-=1;
            }
            else if(numbers[i]+numbers[j]>target){
                j-=1;
            }
            else if(numbers[i]+numbers[j]<target){
                i+=1;
            }

        }
        return v;
    }
};