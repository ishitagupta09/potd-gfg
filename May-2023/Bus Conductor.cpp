class Solution {
  public:
    int findMoves(int n, vector<int> chairs, vector<int> passengers) {
        sort(chairs.begin(),chairs.end());
        sort(passengers.begin(),passengers.end());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(abs(chairs[i]-passengers[i]));
        }
        return sum;
    }
};
