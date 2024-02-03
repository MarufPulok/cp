class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        if str1 + str2 != str2 + str1:
            return ""
        else:
            length = self.gcd(len(str1), len(str2))
            return str1[:length]
    
    def gcd(self, a: int, b: int) -> int:
        if b == 0:
            return a
        else:
            return self.gcd(b, a % b)
