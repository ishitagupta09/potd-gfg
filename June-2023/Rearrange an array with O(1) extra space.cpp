class Solution{
    public:
    void arrange(long long arr[], int n) {
        int temp[n];       
        for(long long int i =0; i<n; i++){
            temp[i] = arr[arr[i]];
        }
        for (long long int j =0; j<n; j++){
            arr[j]= temp[j];
        }        
        return;
    }    
};
