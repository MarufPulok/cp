class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram_map = {}
        result = []
        
        for word in strs:
            sorted_word = ''.join(sorted(word))
            if sorted_word in anagram_map:
                anagram_map[sorted_word].append(word)
            else:
                anagram_map[sorted_word] = [word]
        
        for key in anagram_map:
            result.append(anagram_map[key])
        
        return result