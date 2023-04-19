class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
    set<int> uncovered;
        for (int i = 0; i < N; i++) {
            uncovered.insert(i);
        }
        int i = 0;
        while (i < S.size() && !uncovered.empty()) {
            if (S[i] == '1') {
                for (int j = max(0, i - X);
                     j <= min(N - 1, i + X); j++) {
                    if (uncovered.find(j)
                        != uncovered.end()) {
                        uncovered.erase(j);
                    }
                }
            }
            i++;
        }
        return uncovered.empty();
        
    }
};
