class Solution:
    def checkValid(self, matrix: List[List[int]]) -> bool:
        n = len(matrix)
        
        for row in matrix:
            if len(set(row)) != n:
                return False
        
        new_matrix = [[None] * n for _ in range(n)]
        
        for x in range(n):
            for y in range(n):
                new_matrix[x][y] = matrix[y][x]
                
        for row in new_matrix:
            if len(set(row)) != n:
                return False
        return True