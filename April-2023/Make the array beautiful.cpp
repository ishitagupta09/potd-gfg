class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        vector<int> ans;
        stack<int> stk;
        int n = arr.size();
        stk.push(arr[0]);
        for (int i = 1; i < n; i++) {
            if(stk.size()==0||(stk.top()>=0 && arr[i]>=0)||(stk.top()<0 && arr[i]<0)) {
                stk.push(arr[i]);
            }
            else {
                stk.pop();
            }
        }

        while (!stk.empty()) {
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
