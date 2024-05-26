class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        length = len(s)
        vowels = 'aeiou'
        count = 0
        for i in range(k):
            count += s[i] in vowels
        
        max_count = count
        
        for i in range(k, length):
            count += s[i] in vowels
            count -= s[i - k] in vowels
            max_count = max(max_count, count)
        
        return max_count
        