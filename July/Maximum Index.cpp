class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        stack<int> stk;
        for(int i=n-1; i>=0; i--){
            if(stk.empty()) stk.push(i);
            else if(arr[i]>arr[stk.top()]) stk.push(i);
        }
        
        int ans=0;
        for(int i=0; i<n; i++){
            while(!stk.empty() && arr[i] <= arr[stk.top()]){
                ans = max(ans, stk.top()-i);
                stk.pop();
            }
        }
        return ans;
    }
};
