class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        def dfs(x, y, index):
            if index == len(word):
                return True
            if x < 0 or y < 0 or x >= m or y >= n or board[x][y] != word[index]:
                return False

            temp = board[x][y]
            board[x][y] = '#'
            found = dfs(x + 1, y, index + 1) or dfs(x - 1, y, index + 1) or dfs(x, y + 1, index + 1) or dfs(x, y - 1, index + 1)
            board[x][y] = temp
            return found

        m, n = len(board), len(board[0])
        for i in range(m):
            for j in range(n):
                if board[i][j] == word[0] and dfs(i, j, 0):
                    return True
        return False