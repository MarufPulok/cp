class Solution:
    def decrypt(self, code: List[int], k: int) -> List[int]:
        result = []
        if k == 0:
            return [0] * len(code)

        for i in range(len(code)):
            if k > 0:
                result.append(sum(code[i+1:i+k+1])) if i+k < len(code) else result.append(sum(code[i+1:] + code[:k-len(code)+i+1]))
            else: 
                result.append(sum(code[i+k:i])) if  i+k >= 0 else result.append(sum(code[i+k:] + code[:i]))
        
        return result