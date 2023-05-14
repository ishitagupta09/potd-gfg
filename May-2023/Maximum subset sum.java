class Solution {

    public static long findMaxSubsetSum(int N, int[] A) {
      
        long sum = 0;
        long max = A[0];
        for(int i = 1;i<N;i++){
            long cur = A[i] + Math.max(sum,max);
            sum = max;
            max = cur;
        }
        return Math.max(sum,max);
    }
}
