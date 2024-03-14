class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        if not s:
            return False
        
        if len(s) == 1:
            return False
        
        for i in range(1, len(s)):
            if s[:i] * (len(s) // i) == s:
                return True
        return False
    
    print(repeatedSubstringPattern(repeatedSubstringPattern, "aaaaaa"))