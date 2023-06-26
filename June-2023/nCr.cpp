class Solution{
public:
    int nCr(int n, int r){
        int dp[r+1][n+1];
        for(int i=0;i<=n;i++)
            dp[0][i]=1;
        for(int i=1;i<=r;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==j)
                    dp[i][j]=1;
                else if(j>i)
                    dp[i][j]=(dp[i][j-1]+dp[i-1][j-1])%1000000007;
                else 
                    dp[i][j]=0;
            }    
        }
        return dp[r][n];
    }
};
