class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        
        map<int,int> m;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
     
        int ans = arr[0];
        int minfreq =m[arr[0]];
        
        for(int i=1;i<n;i++){
           int freq = m[arr[i]];
            
            if(freq==minfreq){
                if(arr[i]>=ans){
                    ans = arr[i];
                }
            }
            if(freq<minfreq){
                ans = arr[i];
            }
            
            minfreq = min(freq,minfreq);
        }
        
        return ans;
    }
};
