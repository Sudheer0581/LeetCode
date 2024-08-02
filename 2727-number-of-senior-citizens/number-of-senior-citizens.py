class Solution:
    def countSeniors(self, details: List[str]) -> int:
        c=0
        for i in details:
            x=i[11:13]
            if(int(x)>60):
                c+=1
        return c
        