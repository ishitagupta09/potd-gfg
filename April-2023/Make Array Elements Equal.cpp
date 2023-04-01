class Solution {
  public:
    long long int minOperations(int N) {
        // Code here
        int a = N%2 == 0 ? 1 : 2;
    int opCnt = N/2;
    
    return opCnt*1LL*(a+opCnt-1);
    }
};
