class Solution:
    def topKFrequent(self, nums, k):
        # Step 1: Frequency map
        freq = {}
        for num in nums:
            freq[num] = freq.get(num, 0) + 1

        # Step 2: Bucket array
        bucket = [[] for _ in range(len(nums) + 1)]
        for num, f in freq.items():
            bucket[f].append(num)

        # Step 3: Collect from high frequency to low
        ans = []
        for f in range(len(bucket) - 1, -1, -1):
            for num in bucket[f]:
                ans.append(num)
                if len(ans) == k:
                    return ans
