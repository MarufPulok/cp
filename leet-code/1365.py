# O(n^2) solution
# class Solution:
#     def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
#         return [len([n for n in nums if n < i]) for i in nums]

# O(nlogn) solution
class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        sorted_nums = sorted(nums)
        rank_map = {}

        for i,num in enumerate(sorted_nums):
            if num not in rank_map:
                rank_map[num] = i
        
        return [rank_map[num] for num in nums]
        
# O(n) solution
# class Solution:
#     def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
#         count = [0]*101
#         for num in nums:
#             count[num] += 1
        
#         for i in range(1,101):
#             count[i] += count[i-1]
        
#         return [count[num-1] if num > 0 else 0 for num in nums]