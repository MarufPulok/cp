class Solution:
    def isHappy(self, n: int) -> bool:
        
            
        visit = set()
        
        while n not in visit:
            visit.add(n)
            n = self.sum_of_squares(n)
            if n==1:
                return True
        return False
     
    def sum_of_squares(self,n:int)->int:
        sum = 0
        while n:
            sum += (n%10)**2
            n //= 10
        return sum
           
