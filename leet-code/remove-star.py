class Solution:
    def removeStars(self, s: str) -> str:
        answer = []
        for char in s:
            if char != "*":
                answer.append(char)
            else:
                answer.pop()
        
        return ''.join(answer)