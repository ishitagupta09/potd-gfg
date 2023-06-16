class Solution {
  public:
    long long minTime(int n, vector<int> &locations, vector<int> &types) {
        map<int, pair<int, int>> mp;
        for(int i = 0; i < n; i++) {
            auto it = mp.find(types[i]);
            if(it == mp.end()) mp[types[i]] = {locations[i], locations[i]};
            else mp[types[i]] = {min(mp[types[i]].first, locations[i]), max(mp[types[i]].second, locations[i])};
        }
        int m = mp.size();
        long long dp[m][2], ends[m][2];
        int i = 0;
        for(auto& entry : mp) {
            ends[i][0] = entry.second.first;
            ends[i][1] = entry.second.second;
            i++;
        }
        dp[0][0] = dist(0, ends[0][1]) + dist(ends[0][1], ends[0][0]);
        dp[0][1] = dist(0, ends[0][0]) + dist(ends[0][0], ends[0][1]);
        for(int i = 1; i < m; i++) {
            for(int j = 0; j < 2; j++) {
                dp[i][j] = min(
                    dp[i-1][j] + dist(ends[i-1][j], ends[i][1-j]),
                    dp[i-1][1-j] + dist(ends[i-1][1-j], ends[i][1-j])
                ) + dist(ends[i][1-j], ends[i][j]);
            }
        }
        return min(dp[m-1][0] + dist(ends[m-1][0], 0), dp[m-1][1] + dist(ends[m-1][1], 0));
    }
    
    long long dist(long long a, long long b) {
        return abs(a-b);
    }
};
