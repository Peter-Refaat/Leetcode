class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pref(2e4+5);
        for(int i = 1  ; i <= n ; ++i)
            pref[i] = pref[i-1] + nums[i-1];
        int ret = 0;
        for(int i = 1 ; i <= n ; ++i)
        {
            for(int j = i ; j <= n ; ++j)
            {
                if(pref[j] - pref[i-1] == k)
                    ret++;
            }
        }
        return ret;
    }
};
