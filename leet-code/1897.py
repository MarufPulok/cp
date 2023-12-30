class Solution:
    def makeEqual(self, words: List[str]) -> bool:
        freq = {}
        for word in words:
            for char in word:
                if char not in freq:
                    freq[char] = 0
                freq[char] += 1

       
        for char in freq:
            if freq[char] % len(words) != 0:
                return False

     
        return True
