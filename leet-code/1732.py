class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        altitudes = [0] * (len(gain) + 1)
        
        for i in range(1, len(gain) + 1):
            altitudes[i] = altitudes[i - 1] + gain[i - 1]
        
        return max(altitudes)
    