class Solution
{
    //Function to merge the arrays.
    public static void swap(long arr[] , long arr2[], int a , int b){
        arr[a] += arr2[b];
        arr2[b] = arr[a] - arr2[b];
        arr[a] = arr[a] - arr2[b];
    }
    public static void merge(long arr1[], long arr2[], int n, int m) 
    {
        // code here 
        int i = n-1;
        int j = 0;
        while(i>=0 && j<m){
            while(i>=0 && arr1[i] > arr2[j]){
                swap(arr1,arr2,i,j);
                i--;
            }
            j++;
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);
    }
}
