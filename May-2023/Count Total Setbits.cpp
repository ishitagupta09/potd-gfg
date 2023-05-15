class Solution {
  public:
    long long countBits(long long N) {
        // code here
        long long ans=0;
        int logi=log2(N);
        for(int i=0;i<=logi;i++){
            long long power=pow(2,i);
            long long divi=(N+1)/power;
            ans+=((divi/2)*power);
            if(divi%2!=0)
             ans+=((N+1)%power);
        }
        return ans;
    }};
