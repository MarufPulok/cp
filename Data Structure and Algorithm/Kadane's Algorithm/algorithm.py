# Kadane's Algorithm O(n)

def kadanes(nums):
    maxSum = nums[0]
    currentSum = 0

    for num in nums:
        currentSum = max(currentSum, 0)
        currentSum += num
        maxSum = max(maxSum, currentSum)

    return maxSum


print(kadanes([4, -1, 2, -7, 3, 4]))
