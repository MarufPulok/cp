class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        sorted_candies = sorted(candies)
        max = sorted_candies[-1]
        
        # for candy in candies:
        #     if candy > max:
        #         max = candy
        
        result = []
        
        for candy in candies:
            if candy + extraCandies >= max:
                result.append(True)
            else:
                result.append(False)
                
        
        return result