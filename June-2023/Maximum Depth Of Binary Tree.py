class Solution:
    def maxDepth(self,root):
        
        q = [root]
        res = 0
        while q:
            for _ in range (len(q)):
                node = q.pop(0)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            res += 1
        return res
