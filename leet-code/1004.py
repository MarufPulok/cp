class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        length = len(nums)
        count = 0
        start = 0
        max_length = 0
        for i in range(length):
            count += nums[i] == 0
            while count > k:
                count -= nums[start] == 0
                start += 1
            max_length = max(max_length, i - start + 1)
            
        return max_length