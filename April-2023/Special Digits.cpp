class Solution {
  public:
    int m= 1e9+7;
    void checkDigit(vector<int>&v,int sum){
        while(sum>0){
            int r= sum%10;
            v[r]=1;
            sum= sum/10;
        }
    }
    int binexp(int a,int b){
        int result=1;
        while(b>0){
            if(b&1)
                result= (result* 1LL *a)%m;
            a= (a*1LL*a) %m;
            b= b>>1;
        }
        return result;
    }
    int bestNumbers(int N, int A, int B, int C, int D) {
        int total=0;
        vector<int>v(10,0);
        if(A==B){
            int sum= N*A;
            checkDigit(v,sum);
            if(v[C] or v[D]){
                return 1;
            }
        }
        vector<int>dpfact(N+1,1);
        dpfact[0]=1;
        dpfact[1]=1;
        for(int i=2;i<=N;i++){
            dpfact[i]= (i* 1LL * dpfact[i-1])%m;
        }
        for(int i=0;i<=N;i++){
            int sum= i*A + (N-i)*B;
            v.clear();
            v.resize(10,0);
            checkDigit(v,sum);
            if(v[C] or v[D]){
                int ans=0;
                ans= dpfact[N];
                int denom= (dpfact[i] * 1LL * dpfact[N-i]) % m;
                ans= (ans*1LL*binexp(denom,m-2)) % m;
                total= (total+ ans)%m;
            }
        }
        return total;
    }
};
