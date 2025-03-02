# class Solution:
#     def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
#         return [len([n for n in nums if n < i]) for i in nums]

class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        sorted_nums = sorted(nums)
        rank_map = {}

        for i,num in enumerate(sorted_nums):
            if num not in rank_map:
                rank_map[num] = i
        
        return [rank_map[num] for num in nums]
        