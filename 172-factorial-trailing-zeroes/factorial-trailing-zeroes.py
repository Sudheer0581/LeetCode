import math
class Solution:
    def trailingZeroes(self, n: int) -> int:
        m = 0
        i = 5
        while i <= n:
            m += n // i
            i *= 5
        return m

        