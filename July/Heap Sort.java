class Solution
{
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)
    {
        for(int i=n/2-1;i>=0;i--){
            heapify(arr,n,i);
        }
    }
 
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)
    {
        int max = i;
        int l = 2*i+1;
        int r = 2*i+2;
        
        if(l<n && arr[l]>arr[max])
        max = l;
        if(r<n && arr[r]>arr[max])
        max = r;
        
        if(max!=i){
            int temp = arr[max];
            arr[max] = arr[i];
            arr[i] = temp;
            heapify(arr,n,max);
        }
    }
    
    //Function to sort an array using Heap Sort.
    public void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        for(int i=n-1;i>0;i--){
            int temp = arr[i];
            arr[i] = arr[0];
            arr[0] = temp;
            heapify(arr,i,0);
        }
    }
}
