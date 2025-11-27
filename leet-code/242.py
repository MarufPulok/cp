class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        my_dict1 = {}
        my_dict2 = {}

        for c in s:
            try:
                my_dict1[c] += 1
            except KeyError:
                my_dict1[c] = 1

        for c in t:
            try:
                my_dict2[c] += 1
            except KeyError:
                my_dict2[c] = 1

        if my_dict1 == my_dict2:
            return True
        else:
            return False
        