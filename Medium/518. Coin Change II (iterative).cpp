class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int>dp(amount+1,0);
        dp[0] = 1;
        for(auto& c : coins)
        {
            for(int i = c ; i <= amount ; ++i)
            {
                dp[i] += dp[i - c] * 1LL;
            }
        }
        return dp[amount];
    }
};
