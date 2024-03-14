# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def maxDepth(root: Optional[TreeNode]) -> int:
            if root is None:
                return 0
        
            left = maxDepth(root.left)
            right = maxDepth(root.right)
        
            return max(left, right) + 1
        
        if root is None:
            return True
        
        left = self.maxDepth(root.left)
        right = self.maxDepth(root.right)
        
        if abs(left - right) > 1:
            return False
        else:
            return self.isBalanced(root.left) and self.isBalanced(root.right)