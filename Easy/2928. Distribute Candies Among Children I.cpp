class Solution {
public:
    int distributeCandies(int n, int limit) {
        int ans = 0;
        for(int i = 0 ; i <= n ; ++i)
        {
            for(int j = 0 ; j <= n ; ++j)
            {
                int k = n-i-j;
                if(k >= 0 and k <= limit and i <= limit and j <= limit)
                    ans++;
            }
        }
        return ans;
    }
};
