class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int> dp(amount+1,1e9);
        dp[amount] = 0;
        for(auto& c : coins)
        {
            for(int j = amount ; j >= 0 ; --j)
            {
                if(j + c * 1LL <= amount)
                    dp[j] = min(dp[j],dp[j + c] + 1);
            }
        }
        return (dp[0] >= 1e9 ? -1 : dp[0]);
    }
};
