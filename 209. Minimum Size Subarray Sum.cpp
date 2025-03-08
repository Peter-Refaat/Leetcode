class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l = 1 , r = n , ans = 0;
        while(l <= r)
        {
            int m = l+r>>1 , lst = 0;
            int cur = 0;
            bool can = false;
            for(int i = 0 ; i < m ; ++i)
            {
                cur += nums[i];
            }
            can |= cur >= target;
            for(int i = m ; i < n ; ++i)
            {
                cur -= nums[lst++];
                cur += nums[i];
                can |= cur >= target;
            }
            if(can)
                ans = m , r = m-1;
            else l = m+1;
        }
        return ans;
    }
};
