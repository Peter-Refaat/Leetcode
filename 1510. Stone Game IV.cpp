class Solution {
private:
    vector<int> sq;
public:
    Solution() 
    {
        int i = 1;
        while (i * i <= (int)1e5) {
            sq.push_back(i * i);
            i++;
        }
    }
    bool winnerSquareGame(int n) {
        vector<bool>dp(n+1,false);
        for(int i = 1 ; i <= n ; ++i)
        {
            for(auto& it : sq)
            {
                if(i-it < 0)
                    break;
                if(!dp[i-it])
                {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};
