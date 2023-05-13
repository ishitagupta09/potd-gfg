class Solution {
    public static int bitMagic(int n, int[] arr) {
        int left =0;
        for(int i=0; i<n; i++){
            if(arr[i] ==0 && arr[n-1-i] ==1) left++;
        }
       if(left %2==0)
        return left/2;
        
        return left/2+1;
    }
}
