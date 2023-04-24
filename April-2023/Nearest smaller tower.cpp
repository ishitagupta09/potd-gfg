class Solution
{
public:
    vector <int> smaller_bef(vector<int> &arr){
        stack <int> s;
        int n = arr.size();
        vector<int> ans (n, -1);
        
        for(int i=0; i<n; i++){
            if(s.empty()){
                s.push(i);
                ans[i] = -1;
            }
            else{
                while(!s.empty() && arr[s.top()] >= arr[i] ){
                    s.pop();
                }
                if(s.empty()){
                    s.push(i);
                    ans[i] = -1;
                }
                else {ans[i] = s.top(); s.push(i);}
            }
        }
        return ans;
    }
    
    vector <int> smaller_aft(vector<int> &arr){
        stack <int> s;
        int n = arr.size();
        vector<int> ans (n, -1);
        
        for(int i=n-1; i>=0; i--){
            if(s.empty()){
                s.push(i);
                ans[i] = -1;
            }
            else{
                while(!s.empty() && arr[s.top()] >= arr[i] ){
                    s.pop();
                }
                if(s.empty()){
                    s.push(i);
                    ans[i] = -1;
                }
                else {ans[i] = s.top(); s.push(i);}
            }
        }
        return ans;
    }
    
    vector<int> nearestSmallerTower(vector<int> arr){
        
        vector <int> smallest_before = smaller_bef(arr);
        vector <int> smallest_after = smaller_aft(arr);
        int n = arr.size();
        vector <int> ans (n);
        
        for(int i=0; i<n; i++){
            if(smallest_before[i] == -1){
                ans[i] = smallest_after[i];
            }
            else if (smallest_after[i] == -1){
                ans[i] = smallest_before[i];
            }
            else{
                int dist1 = i - smallest_before[i];
                int dist2 = smallest_after[i] - i;
                
                if(dist1 < dist2) ans[i] = smallest_before[i];
                if (dist1 > dist2) ans[i] = smallest_after[i];
                if(dist1 == dist2){
                    ans[i] = smallest_before[i];
                    if(arr[smallest_after[i]] < arr[smallest_before[i]])
                        ans[i] = smallest_after[i];
                }
            }
                
        }
        
        return ans;
    }
};
