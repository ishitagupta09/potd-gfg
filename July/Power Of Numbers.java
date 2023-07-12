class Solution
{
    long power(int N,int R)
    {
        //Your code here
        int mod = 1000000007;
        if(R == 1)  return N;
        else if(R % 2 == 1) return (N * power(N , R-1))%mod;
        else
        {
            long temp = power(N , R/2);
            return (temp*temp)%mod;
        }
    }
}
