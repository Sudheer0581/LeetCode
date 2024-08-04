class Solution:
    def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
        mod=1000000007
        l=[]
        for i in range(n):
            s=0
            for j in range(i,n):
                s+=nums[j]
                l.append(s)
        l.sort()
        print(l)
        x=0
        for i in range(left-1,right):
            x=(x+l[i])%mod
        return x
        