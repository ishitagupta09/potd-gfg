class Solution{
    int b_search(int val,vector<int> &A,int n){
        int low = 0,high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(A[mid] >= val) high = mid-1;
            else low = mid+1;
        }
        return high;
    }
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        vector<int> A = arr;
        sort(A.begin(),A.end());
        vector<long long> prefixSum;
        prefixSum.push_back(A[0]);
        for(int i=1;i<n;i++){
            prefixSum.push_back(prefixSum.back() + A[i]);
        }
        vector<long long> ans;
        for(int i=0;i<n;i++){
            int ind = b_search(arr[i],A,n);
            if(ind==-1) ans.push_back(0);
            else ans.push_back(prefixSum[ind]);
        }
        return ans;
    }
};
