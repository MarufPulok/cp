class Solution:
    def longestPalindrome(self, s: str) -> str:
        result = ""
        result_len = 0

        for i in range(len(s)):

            l_pointer = i
            r_pointer = i

            while l_pointer >= 0 and r_pointer <= len(s) and s[l_pointer] == s[r_pointer]:
                if r_pointer-l_pointer+1 > result_len:
                    result_len = r_pointer-l_pointer+1
                    result = s[l_pointer:r_pointer+1]
                l_pointer -= 1
                r_pointer += 1

            l_pointer = i
            r_pointer = i+1

            while l_pointer >= 0 and r_pointer <= len(s) and s[l_pointer] == s[r_pointer]:
                if r_pointer-l_pointer+1 > result_len:
                    result_len = r_pointer-l_pointer+1
                    result = s[l_pointer:r_pointer+1]
                l_pointer -= 1
                r_pointer += 1

            return result
