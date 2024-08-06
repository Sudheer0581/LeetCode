class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        x=s.split(' ')
        if(x[-1]!=''):
            return len(x[-1])
        else:
            t=''
            for i in x:
                if i!='':
                    t=i
            return len(t)
        