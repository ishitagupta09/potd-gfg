from collections import Counter
class Solution:
    def countSpecialNumbers(self, N, arr):
        # Code here
        arr.sort()
        d=Counter(arr)
        c=0
        for i in range(N):
            if d[arr[i]]>1:
                c+=1
            else:
                j=0
                while j<i:
                    if arr[i]%arr[j]==0:
                        c+=1
                        break
                    j+=1
        return c
