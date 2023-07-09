class Solution
{
    static int missingNumber(int arr[], int size)
    {
        int a[] = new int[size];
        for (int i = 0; i<size;i++) {
            if (arr[i]>0 & arr[i]<=size) {a[arr[i]-1]=arr[i];}
        }
        for (int j=0;j<size;j++){
            if (a[j]==0) {return j+1;}
        }
        return size+1;
    
    }
}
