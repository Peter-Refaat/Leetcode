class Solution {
    vector<int>b;
    int dp[2][2][32];//tight,prevOne,curBit
public:
    Solution()
    {
        memset(dp,-1,sizeof dp);
    }
    int rec(int i , bool tight , bool prevOne)
    {
        if(i==b.size())
            return 1;
        int& ret = dp[tight][prevOne][i];
        if(~ret)
            return ret;
        ret = 0;
        int hi = tight ? b[i] : 1;
        for(int bit = 0 ; bit <= hi ; ++bit)
        {
            if(bit==1 and prevOne)continue;
            ret += rec(i+1,tight and (bit == hi) , (bit==1));
        }
        return ret;
    }
    int findIntegers(int n) {
        while(n)
            b.push_back(n%2) , n >>= 1;
        reverse(b.begin(),b.end());
        return rec(0,1,0);
    }
};
