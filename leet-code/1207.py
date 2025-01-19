class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        unique_map = {}
        
        for i in arr:
            if i in unique_map:
                unique_map[i] += 1
            else:
                unique_map[i] = 1
        
        return len(unique_map.values()) == len(set(unique_map.values()))
                