class Solution:
    def romanToInt(self, s: str) -> int:
        a = 0
        
        roman_val = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        
        for a,x in zip(s, s[1:]):
            if roman_val[a] < roman_val[x]:
                a -= roman_val[a]
            else:
                a += roman_val[a]
                
        return a + roman_val[s[-1]]