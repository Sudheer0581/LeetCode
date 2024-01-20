class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>v;
        int j=0;
        for(int i=0;i<nums1.size();i++){
            if(i>=m){
                nums1[i]=nums2[j];
                j+=1;
            }
        }
        sort(nums1.begin(),nums1.end());
        
        
    }
};