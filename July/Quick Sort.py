class Solution:
    def quickSort(self,arr,low,high):
        if low<high:
            p=self.partition(arr,low,high)
            self.quickSort(arr,low,p-1)
            self.quickSort(arr,p+1,high)
        
    def partition(self,arr,low,high):
        x=low
        for i in range(low,high):
            if arr[i]<=arr[high]:
                arr[x],arr[i]=arr[i],arr[x]
                x+=1
        arr[x],arr[high]=arr[high],arr[x]
        return x
