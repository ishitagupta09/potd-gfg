class Solution {
    public static int maxEqualSum(int N1,int N2,int N3, int[] S1, int[] S2, int[] S3) {
        int sum1=S1[N1-1];
        int sum2=S2[N2-1];
        int sum3=S3[N3-1];
        int res=0;
        int i=1,j=1,k=1;
        while(true){
            // if all the sum are equal
            if(sum1==sum2 && sum3==sum2){
                res=sum1;
                if(i==N1&&j==N2&&k==N3)break;
                else{
                    if(i<N1)
                        sum1+=S1[N1-(i++)-1];
                    else if(j<N2)
                        sum2+=S2[N2-(j++)-1];
                    else if(k<N3)
                        sum3+=S3[N3-(k++)-1];
                }
            }
            // finding the largest number sum
            int x=sum1<sum2 ? sum2 : sum1;
            x= x<sum3 ? sum3 : x;
            
            if(x!=sum1){
                if(i<N1){
                    sum1+=S1[N1-(i++)-1];
                }else break;
            }
            if(x!=sum2){
                if(j<N2){
                    sum2+=S2[N2-(j++)-1];
                }else break;
            }
            if(x!=sum3){
                if(k<N3){
                    sum3+=S3[N3-(k++)-1];
                }else break;
            }
        }
        return res;
    }
}
