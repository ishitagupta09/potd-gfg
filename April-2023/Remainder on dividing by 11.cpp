
class Solution{
public:
    int xmod11(string x){
       int z = x[0] - '0';
       for(int i = 1;i<x.length();i++){
           int k = x[i] - '0';
           if(k>=z){
               z = k - z;
           }
           else{
               z--;
               k+=10;
               z = k - z;
           }
       }
       return z;
    }
};
