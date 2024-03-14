class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for char in s:
            if char == "(" or char == "{" or char == "[":
                stack.append(char)
            else:
                if len(stack) == 0:
                    return False
                else:
                    last = stack.pop()
                    if (char == ")" and last != "(") or (char == "}" and last != "{") or (char == "]" and last != "["):
                        return False
        return len(stack) == 0 