class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        
        reverse = 0
        y = x
        
        while y:
            reverse = reverse * 10 + y % 10
            y //= 10
        
        if reverse == x:
            return True
        else:
            return False