class Solution:
    def reverse(self, x: int) -> int:
        answer = 0
        signed = -1 if x < 0 else 1
        x *= signed
        
        while x:
            answer = answer * 10 + x % 10
            x //= 10
            
        return 0 if answer < -2**31 or answer > 2**31 else signed * answer
    