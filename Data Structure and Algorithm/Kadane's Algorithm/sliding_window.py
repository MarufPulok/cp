# return the left and right index of the max subarray sum
# assuming there are exactly one solution
# this is a variation of kadane's algorithm

def slidingWindow(nums):
    maxSum = nums[0]
    currentSum = 0
    maxLeft, maxRight = 0, 0
    Left = 0
    
    for Right in range(len(nums)):
        if currentSum < 0:
            currentSum = 0
            Left = Right
        
        currentSum += nums[Right]
        if currentSum > maxSum:
            maxSum = currentSum
            maxLeft, maxRight = Left, Right
    
    return [maxLeft, maxRight]


print(slidingWindow([4, -1, 2, -7, 3, 4]))


