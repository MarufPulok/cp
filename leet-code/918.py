class Solution:
    def maxSubarraySumCircular(self, nums: List[int]) -> int:
        def kadanes(nums):
            maxSum = nums[0]
            currentSum = 0

            for num in nums:
                currentSum = max(currentSum, 0)
                currentSum += num
                maxSum = max(maxSum, currentSum)

            return maxSum

        total = sum(nums)
        maxSum = kadanes(nums)

        nums = [-num for num in nums]

        maxCircular = total + kadanes(nums)

        return max(maxSum, maxCircular) if maxSum > 0 else maxSum
