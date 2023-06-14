class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        long long ans=0;
        
        priority_queue<int> pq;
        for (int i=0;i<N;i++){
            pq.push(A[i]);
        }
        
        for(int i=0;i<K;i++){
            int temp=pq.top();
            pq.pop();
            ans+=temp;
            pq.push(temp/2);
        }
        
        return ans;
    }
};
