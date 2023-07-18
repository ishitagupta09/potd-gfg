class Solution
{
    public int LongestRepeatingSubsequence(String str)
    {
        // code here
        char arr[]=str.toCharArray();
        int max=0;
        int n=arr.length;
        int[][]dp=new int[n+1][n+1];
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(arr[i-1]==arr[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=Math.max(dp[i-1][j],dp[i][j-1]);
                }
                 max=Math.max(max,dp[i][j]);
            }
        }
        return max;
    }
}
