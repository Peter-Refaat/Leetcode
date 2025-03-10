#define ll long long
class Solution {
private:
    ll dp[2 * 4005 + 5][1005];
    const ll mod = 1e9 + 7;
    ll add(ll a , ll b) { return 1LL * (a%mod + b%mod + mod)%mod; }
public:
    Solution()
    {
        memset(dp,-1,sizeof dp);
    }
    ll rec(int x , int cap , int& target)
    {
        if(!cap)
        {
            if(x > 2000)
                x -= 2000;
            return (x == target);
        }
        ll& ret = dp[x < 0 ? x + 2000 : x][cap];
        if(~ret)
            return ret;
        ret = 0LL;
        return ret = add(rec(x+1,cap-1,target) ,rec(x-1,cap-1,target));
    }
    int numberOfWays(int startPos, int endPos, int k) {
        return rec(startPos,k,endPos);
    }
};
