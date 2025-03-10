#define ll long long
class Solution {
private:
    ll dp[2 * 2005 + 5][1005];
    const ll mod = 1e9 + 7;
    ll add(ll a , ll b) { return 1LL * (a%mod + b%mod + mod)%mod; }
public:
    Solution()
    {
        memset(dp,0,sizeof dp);
    }
    int numberOfWays(int startPos, int endPos, int k) {
        startPos += 1000;
        endPos += 1000;
        dp[startPos][k] = 1;
        for(int cap = k-1; cap >= 0 ; --cap)
            for(int x = 1 ; x < 3005 ; ++x)
                dp[x][cap] = add(dp[x+1][cap+1],dp[x - 1][cap+1]);
        return dp[endPos][0];
    }
};
