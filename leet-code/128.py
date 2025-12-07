class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        nums_set = set(nums)
        lcs = 1

        for num in nums_set:
            if num - 1 in nums_set:
                continue
            current_number = num
            curr = 1
            while current_number + 1 in nums_set:
                current_number += 1
                curr += 1
            lcs = max(curr,lcs) 
        
        return lcs

        