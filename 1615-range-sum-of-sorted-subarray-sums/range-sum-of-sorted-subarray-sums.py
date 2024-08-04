class Solution:
    def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
        temp = []
        for i in range(len(nums)):
            a = 0
    
            for j in range(i,len(nums)):
                a += nums[j]
                temp.append(a)
        temp.sort()
        return sum(temp[left-1:right]) % 1_000_000_007