import math
class Solution:
    def trailingZeroes(self, n: int) -> int:
        x=math.factorial(n)
        c=0
        while(x%10==0):
            c+=1
            x//=10
        return c

        