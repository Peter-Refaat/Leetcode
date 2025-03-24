#define ll long long
class Solution {
private:
    ll dp[2][2][25][210];
    const int mod = 1e9 + 7;

public:
    Solution() { memset(dp, -1, sizeof dp); }
    ll add(ll a, ll b) { return (a % mod + b % mod + mod) % mod; }
    ll rec(int i, bool tl, bool tu, int sum, string& l, string& r, int& mn,
           int& mx) {
        if (i == l.size())
            return (sum >= mn and sum <= mx);
        ll& ret = dp[tl][tu][i][sum];
        if (~ret)
            return ret;
        ret = 0;
        int lo = tl ? l[i] - '0' : 0;
        int hi = tu ? r[i] - '0' : 9;
        for (int dig = lo; dig <= hi; ++dig)
            ret = add(ret, rec(i + 1, tl and dig == lo, tu and dig == hi,
                               sum + dig, l, r, mn, mx));
        return ret;
    }
    int count(string num1, string num2, int min_sum, int max_sum) {
        while (num1.size() < num2.size())
            num1 = "0" + num1;
        return rec(0, 1, 1, 0, num1, num2, min_sum, max_sum);
    }
};
