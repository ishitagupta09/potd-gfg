class Solution {
    public static int getMaximum(int N, int[] arr) {
        long totalcookies = 0;
        for(Integer cokkie: arr) totalcookies += cokkie;
        while(N>1){
        if(totalcookies % N == 0) return N;
        N = N-1;
    }
    return 1;
    }
    
}
