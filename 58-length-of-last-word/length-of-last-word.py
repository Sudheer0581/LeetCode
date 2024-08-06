class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        t=''
        x=s.split(" ")
        for i in x:
            if i.isalpha():
                t=i
        return len(t)
        