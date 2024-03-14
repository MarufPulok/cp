class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        left = float('inf')
        middle = float('inf')

        for right in nums:
            if right <= left:
                left = right
            elif right <= middle:
                middle = right
            else:
                return True
        
        return False
