class Solution {
public:
    int nextGreaterElement(int n) {
        int x = n;
        string num = to_string(n);

        int i = num.size() - 2;
        while(i>= 0 && num[i]>=num[i+1]) {
            i--;
        }

        if(i==-1) return -1;

        int k = num.size() -1;
        while(num[i]>=num[k]) k--;

        
        swap(num[i], num[k]);

        reverse(num.begin() + i+1, num.end());
        long ans = stol(num);
        if(ans>INT_MAX) return -1;

        return ans;
    }
};