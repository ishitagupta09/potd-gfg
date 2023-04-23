class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        int gcd=INT_MAX;
        for(int i=0;i<n;i++){
            gcd = min(gcd,arr[i]);
        }
        for(int i=0;i<n;i++){
            gcd = __gcd(gcd,arr[i]);
        }
        return gcd;
    }
};
