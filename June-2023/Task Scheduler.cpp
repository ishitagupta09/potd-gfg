class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        unordered_map<char, int> mp;
        int count = 0;
        for (auto e : tasks) {
            mp[e]++;
            count = max(count, mp[e]);
        }
        int ans = (count - 1) * (K + 1);
        for (auto e : mp)
            if (e.second == count) ans++;
        return max((int)tasks.size(), ans);
    }
};
