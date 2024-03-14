# time complexity O(n^2)

def bruteForce(nums):
    maxSum = nums[0]
    
    for i in range(len(nums)):
        currentSum = 0
        for j in range(i, len(nums)):
            currentSum += nums[j]
            maxSum = max(currentSum, maxSum)
    
    return maxSum

print(bruteForce([4, -1, 2, -7, 3, 4]))