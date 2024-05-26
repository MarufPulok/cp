class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        n = len(nums)
        sum_arr = [0] * (n + 1)
        for i in range(1, n + 1):
            sum_arr[i] = sum_arr[i - 1] + nums[i - 1]
        max_avg = -float('inf')
        for i in range(k, n + 1):
            max_avg = max(max_avg, (sum_arr[i] - sum_arr[i - k]) / k)
        return max_avg
                              