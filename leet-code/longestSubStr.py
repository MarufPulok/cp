class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        len = 0
        
        cnt = Counter()
        x = 0
        
        for y,z in enumerate(s):
            cnt[z] += 1
            while cnt[z] > 1:
                cnt[s[x]] -= 1
                x += 1
            len = max(len, y - x + 1)
        
        return len