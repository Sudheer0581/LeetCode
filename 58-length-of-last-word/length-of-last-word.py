class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        x=s.split()
        z=x[::-1]
        for i in z:
            k=len(i)
            break
        return k