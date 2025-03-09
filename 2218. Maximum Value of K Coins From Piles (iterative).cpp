class Solution {
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n = piles.size();
        vector<vector<int>>dp(n+5,vector<int>(k+5)),pref(n+5,vector<int>(k+5));
        for(int i = 1 ; i <= n ; ++i)
        {
            for(int j = 1 ; j <= min((int)piles[i-1].size(),k); ++j)
            {
                pref[i][j] = pref[i][j-1] + piles[i-1][j-1];
            }
        }
        for(int i = n ; i >= 1 ; --i)
        {
            for(int j = 0 ; j <= k ; ++j)
            {
                for(int k = 0 ; k <= min(j,(int)piles[i-1].size()) ; ++k)
                {
                    dp[i][j] = max(dp[i][j] , dp[i+1][j-k] + pref[i][k]);
                }
            }
        }
        return dp[1][k];
    }
};
