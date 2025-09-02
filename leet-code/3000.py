import math

class Solution:
    def areaOfMaxDiagonal(self, dimensions: List[List[int]]) -> int:
        max_diagonal = 0
        max_area = 0
        def calculateLength(x,y):
            return math.sqrt(x*x + y*y)
        
        for l,w in dimensions:
            diagonal = calculateLength(l,w)
            area = l*w

            if diagonal > max_diagonal or (diagonal == max_diagonal and area > max_area):
                max_diagonal = diagonal
                max_area = area
        
        return max_area
            