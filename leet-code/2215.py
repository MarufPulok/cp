class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        set1 = set(nums1)
        set2 = set(nums2)
        
        diif1 = set1.difference(set2)
        diif2 = set2.difference(set1)
        
        return [list(diif1), list(diif2)]