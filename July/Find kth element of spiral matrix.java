class Solution{
   int findK(int A[][], int n, int m, int k){
            int rl=0,ru=n-1,cl=0,cu=m-1,count=0;
             while(count!=n*m){
                 for(int i=cl;i<=cu;i++){
                     count++;
                     if(count==k)return A[rl][i];
                 }
                 rl++;
                 for(int i=rl;i<=ru;i++){
                     count++;
                     if(count==k)return A[i][cu];
                 }
                 cu--;
                 for(int i=cu;i>=cl;i--){
                     count++;
                     if(count==k)return A[ru][i];
                 }
                 ru--;
                 for(int i=ru;i>=rl;i--){
                     count++;
                     if(count==k)return A[i][cl];
                 }
                 cl++;
             }
             return 0;
    }
}
