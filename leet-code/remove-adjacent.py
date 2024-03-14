class Solution:
    def removeDuplicates(self, s: str) -> str:
        str = []
        i = 0
        
        while i < len(s):
            if len(str) !=0 and str[-1]==s[i]:
                i+=1
                str.pop(-1)
            else:
                str.append(s[i])
                i+=1
            
            return str