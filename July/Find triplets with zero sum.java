class Solution
{
    // arr[]: input array
    // n: size of the array
    //Function to find triplets with zero sum.
    public boolean findTriplets(int arr[] , int n)
    {
        //add code here.
        Arrays.sort(arr);
        for(int i =0;i<n;i++){
            int temp = 0-arr[i];
            int j=i+1,k=n-1;
            
            while(j<k){
                if(arr[j]+arr[k] == temp){
                    return true;
                }
                else if(arr[j]+arr[k] < temp ){
                    j++;
                }
                else k--;
            }
        }
        return false;
    }
}

