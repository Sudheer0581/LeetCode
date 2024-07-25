class Solution {
public:
    void merge(vector<int>&arr,int low,int mid,int high){
        vector<int>v;
        int left=low;
        int right=mid+1;
        while(left<=mid and right<=high){
            if(arr[left]<=arr[right]){
                v.push_back(arr[left]);
                left+=1;
            }
            else{
                v.push_back(arr[right]);
                right+=1;
            }
        }
        while(left<=mid){
            v.push_back(arr[left]);
            left+=1;
        }
        while(right<=high){
            v.push_back(arr[right]);
            right+=1;
        }
        for (int i = 0; i < v.size(); i++) {
            arr[low + i] = v[i];
        }
    }
    void mergeSort(vector<int>&arr,int low,int high){
        if(low>=high) return;
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);

    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};