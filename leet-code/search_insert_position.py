class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        def binary_search(nums, target, start, end):
            if start > end:
                return start
            mid = (start + end) // 2
            if nums[mid] == target:
                return mid
            elif nums[mid] > target:
                return binary_search(nums, target, start, mid - 1)
            else:
                return binary_search(nums, target, mid + 1, end)
        
        binary_search(nums, target, 0, len(nums) - 1)