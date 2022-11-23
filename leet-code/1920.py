class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        n = len(nums)
        
        for i, num in enumerate(nums):
            nums[i] += n*(nums[nums[i]] % n)
            
        for i in range(n):
            nums[i] //= n
        
        return nums 