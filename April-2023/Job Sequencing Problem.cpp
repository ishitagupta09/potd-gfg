class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.

    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,[](Job x,Job y){
            return x.profit>y.profit;
        });
        map<int,int>mp;
        int tp=0;
        int tj=0;
        for(int i=0;i<n;i++){
            int profit=arr[i].profit;
            int deadline=arr[i].dead;
            for(int j=deadline;j>=1;j--){
                if(mp[j]==false){
                    tp=tp+profit;
                    tj=tj+1;
                    mp[j]=1;
                    break;
                }
            }
        }
        vector<int>v;
        v.push_back(tj);
        v.push_back(tp);
        return v;
        
    } 
};
