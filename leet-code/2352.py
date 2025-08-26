from collections import defaultdict

class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        row_count = defaultdict(int)
        col_count = defaultdict(int)

        for row in grid:
            row_count[tuple(row)] += 1

        for col in zip(*grid):
            col_count[tuple(col)] += 1

        result = 0
        for key in row_count:
            result += row_count[key] * col_count[key]
        return result
