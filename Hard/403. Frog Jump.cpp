const int N = 2005;
class Solution {
private:
    int dp[N][N];
public:
    int rec(int i, int lst, vector<int>& stones) {
        if (i == stones.size() - 1)
            return 1;
        if (~dp[i][lst])
            return dp[i][lst];
        dp[i][lst] = 0;
        int idx1 = lower_bound(stones.begin(), stones.end(), stones[i] + lst) - stones.begin();
        int idx2 = lower_bound(stones.begin(), stones.end(), stones[i] + lst - 1) - stones.begin();
        int idx3 = lower_bound(stones.begin(), stones.end(), stones[i] + lst + 1) - stones.begin();
        if (idx1 < stones.size() and stones[idx1] == stones[i] + lst)
            dp[i][lst] |= rec(idx1, lst, stones);
        if (idx2 < stones.size() and lst-1 > 0 and stones[idx2] == stones[i] + lst - 1)
            dp[i][lst] |= rec(idx2, lst - 1, stones);
        if (idx3 < stones.size() and stones[idx3] == stones[i] + lst + 1)
            dp[i][lst] |= rec(idx3, lst + 1, stones);
        return dp[i][lst];
    }
    bool canCross(vector<int>& stones) {
        if (stones[1] != 1)
            return false;
        memset(dp, -1, sizeof dp);
        return rec(1, 1, stones);
    }
};
