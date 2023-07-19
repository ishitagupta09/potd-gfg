class Solution
{
    public int longestPalinSubseq(String S)
    {
        //code here
        String P = new StringBuilder(S).reverse().toString();
        // Dp[i][i] will store the length of the longest.
        // palindromic subsequence for the substring.
        // starting at index i and ending at index j
        
        int dp[][] = new int[S.length() + 1][P.length() + 1];
        
        // Filling up Dp table based on conditions discussed
        
        for (int i=1; i<=S.length(); i++) {
            for (int j = 1; j <= P.length(); j++) {
                if(S.charAt(i- 1) == P.charAt(j-1))
                dp[i][j] = 1 + dp[i - 1][j - 1];
                else 
                dp[i][j] = Math.max(dp[i][j-1], dp[i - 1][j]);
            }
        }
        // At the end dp table will contain the LPS So just return the Length of LPS.
        return dp[S.length()][P.length()];
        
    }
}
