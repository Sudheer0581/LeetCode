class Solution:
    def reverseBits(self, n: int) -> int:
        i=0
        x=0
        while(n):
            if(n&1):
                x+=(1<<(31-i))
            i+=1
            n=n>>1
        return x

        