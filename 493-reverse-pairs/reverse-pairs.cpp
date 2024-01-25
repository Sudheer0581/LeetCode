class Solution {
public:
    int Merge(vector<int>&a,int l,int m,int h){
        int ans=0;
        for(int i=l;i<=m;i++){
            int j=m+1;
            while(j<=h and a[i]>1LL*2*a[j] ){
                j++;
            }
            ans+=j-(m+1);
        }
        int i=l;
        int j=m+1;
        int k=l;
        int temp[h+1];
        while(i<=m and j<=h){
            if(a[i]>a[j]){
                temp[k++]=a[j++];
            }
            else{
                temp[k++]=a[i++];
            }
        }
        while(i<=m){
            temp[k++]=a[i++];
        }
        while(j<=h){
            temp[k++]=a[j++];
        }
        for(int i=l;i<=h;i++){
            a[i]=temp[i];
        }
        return ans;
        

    }
    int MergeSort(vector<int>&a,int l,int h){
        if(l>=h)return 0;
        int m=l+(h-l)/2;
        int c=0;
        c=MergeSort(a,l,m);
        c+=MergeSort(a,m+1,h);
        c+=Merge(a,l,m,h);
        return c;
    }
    int reversePairs(vector<int>& nums) {
        int x=MergeSort(nums,0,nums.size()-1);
        return x;
    }
};