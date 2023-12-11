class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        
        threshold = len(arr) // 4

       
        current_count = 1
        for i in range(1, len(arr)):
            if arr[i] == arr[i - 1]:
                current_count += 1
            else:
                current_count = 1

            if current_count > threshold:
                return arr[i]
        
        return arr[-1]